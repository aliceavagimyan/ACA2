#include "matrix.hpp"

    Matrix::Matrix(const int& _row, const int& _col) {
        row = _row;
        col = _col;
        matrix = new int*[row];
        for (int i = 0; i < row; ++i) {
            matrix[i] = new int[col];
        }
    }

    Matrix::~Matrix() {
        for (int i = 0; i < row; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    Matrix:: Matrix(const Matrix& matrix2) {
        row = matrix2.row;
        col = matrix2.col;
        matrix = new int*[row];
        for (int i = 0; i < row; ++i) {
            matrix[i] = new int[col];
            for (int j = 0; j < col; ++j) {
                matrix[i][j] = matrix2.matrix[i][j];
            }
        }
    }

    Matrix&  Matrix::operator=(const Matrix& matrix2) {
        if (this != &matrix2) {
            for (int i = 0; i < row; ++i) {
                delete[] matrix[i];
            }
            delete[] matrix;
            row = matrix2.row;
            col = matrix2.col;
            matrix = new int*[row];
            for (int i = 0; i < row; ++i) {
                matrix[i] = new int[col];
                for (int j = 0; j < col; ++j) {
                    matrix[i][j] = matrix2.matrix[i][j];
                }
            }
        }
        return *this;
    }

    void  Matrix::initializeMatrix() {
        srand(time(0));
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                matrix[i][j] = rand() % 10;
            }
        }
    }

    void Matrix::saveToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            file << row << " " << col << std::endl;
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < col; ++j) {
                    file << matrix[i][j] << " ";
                }
                file << std::endl;
            }
            file.close();
        }
        else {
            std::cerr << "Unable to open file" << std::endl;
        }
    }

    Matrix Matrix:: multiply(const Matrix& other) const {
        if (col != other.row) {
            std::cout<<"invalid dimensions"<<std::endl;
        }
        Matrix result(row, other.col);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < other.col; ++j) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < col; ++k) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }


    void Matrix:: printMatrix() {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

     Matrix Matrix::readFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            int row, col;
            file >> row >> col;
            Matrix matrix(row, col);
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < col; ++j) {
                    file >> matrix.matrix[i][j];
                }
            }
            file.close();
            return matrix;
        }
        else {
            std::cerr << "Unable to open file" << std::endl;
            return Matrix(0, 0); 
        }
    }

