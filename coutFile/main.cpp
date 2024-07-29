#include <iostream>
#include <fstream>

int main() {
    
    std::ofstream outFile;
    outFile.open("output.txt");

    std::streambuf* coutBuf = std::cout.rdbuf();

    std::cout.rdbuf(outFile.rdbuf());

    std::cout << "Hello, this will be written to the file instead of the terminal." << std::endl;

    std::cout.rdbuf(coutBuf);

    outFile.close();

 
    std::cout << "This will be printed to the terminal." << std::endl;

    return 0;
}
