#ifndef MATRIX_HPP
#define MATRIX_HPP


#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <stdexcept>

template <typename T>
class Matrix {
public:
    Matrix(const int& _row, const int& _col);
    ~Matrix();
    Matrix(const Matrix& other);
    Matrix& operator=(const Matrix& other);
    void initializeMatrix();
    void saveToFile(const std::string& filename);

    Matrix<T> operator*(const Matrix<T>& other) const;
    void printMatrix() const;
    static Matrix<T> readFromFile(const std::string& filename);

private:
    int row;
    int col;
    T** matrix;
};

template <typename T>
Matrix<T>::Matrix(const int& _row, const int& _col) : row(_row), col(_col) {
    matrix = new T*[row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new T[col]();
    }
}

template <typename T>
Matrix<T>::~Matrix() {
    for (int i = 0; i < row; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
template <typename T>
Matrix<T>::Matrix(const Matrix& other) : row(other.row), col(other.col) {
    matrix = new T*[row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new T[col];
        for (int j = 0; j < col; ++j) {
            matrix[i][j] = other.matrix[i][j];
        }
    }
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix& other) {
    if (this != &other) {
        // Clean up existing resources
        for (int i = 0; i < row; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;

        // Copy the new resources
        row = other.row;
        col = other.col;
        matrix = new T*[row];
        for (int i = 0; i < row; ++i) {
            matrix[i] = new T[col];
            for (int j = 0; j < col; ++j) {
                matrix[i][j] = other.matrix[i][j];
            }
        }
    }
    return *this;
}


template <typename T>
void Matrix<T>::initializeMatrix() {
    srand(time(0));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            matrix[i][j] = rand() % 10;
        }
    }
}

template <typename T>
void Matrix<T>::saveToFile(const std::string& filename) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + filename);
    }
    file << row << " " << col << std::endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            file << matrix[i][j] << " ";
        }
        file << std::endl;
    }
    file.close();
}

template <typename T>
Matrix<T>  Matrix<T>:: operator*(const Matrix<T>& other) const {
    if (col != other.row) {
        throw std::invalid_argument("Matrix dimensions do not match for multiplication.");
    }

    Matrix<T> result(row, other.col);
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

template <typename T>
void Matrix<T>::printMatrix() const {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <typename T>
Matrix<T> Matrix<T>::readFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + filename);
    }
    int row, col;
    file >> row >> col;
    Matrix<T> matrix(row, col);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            file >> matrix.matrix[i][j];
        }
    }
    file.close();
    return matrix;
}

template <>
class Matrix<std::string> {
public:
    Matrix(const int& _row, const int& _col) {
        std::cerr << "Operation not supported for std::string type" << std::endl;
    }
    ~Matrix() {
        std::cerr << "Operation not supported for std::string type" << std::endl;
    }
    void initializeMatrix() {
        std::cerr << "Operation not supported for std::string type" << std::endl;
    }
    void saveToFile(const std::string& filename) {
        std::cerr << "Operation not supported for std::string type" << std::endl;
    }
    Matrix<std::string> operator*(const Matrix<std::string>& other) const {
        std::cerr << "Operation not supported for std::string type" << std::endl;
        return Matrix<std::string>(0, 0);
    }
    void printMatrix() const {
        std::cerr << "Operation not supported for std::string type" << std::endl;
    }
    static Matrix<std::string> readFromFile(const std::string& filename) {
        std::cerr << "Operation not supported for std::string type" << std::endl;
        return Matrix<std::string>(0, 0);
    }
};

#endif // MATRIX_HPP