#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

enum  Types{
    INTEGER,
    STRING,
    FLOAT,
    CHAR
};
union Vals{
    int intVal;
    char stringVal[1000];
    float floatVal;
    char charVal;
};
class Data{\
public:
    Types type;
    Vals typeVal;
    void print () const{
        switch(type){
        case INTEGER:{
            std::cout<<"Integer"<<typeVal.intVal<<std::endl;
            break;
        }
        case STRING:{
            std::cout<<"String(array of chars)"<<typeVal.stringVal<<std::endl;
            break;
        }
        case FLOAT:{
            std::cout<<"FLOAT(double)"<<typeVal.floatVal<<std::endl;
            break;
            }
        case CHAR:{
            std::cout<<"CHAR"<<typeVal.charVal<<std::endl;
            break;
            }
        }
     }
};
Types determineType(const std::string& str){
    if (str.size() >=1 && ((str[0] >= 33 && str[0] <= 47) || 
                            (str[0] >= 58 && str[0] <= 64) ||
                            (str[0] >= 91 && str[0] <= 96) ||
                            (str[0] >= 123 && str[0] <= 126)))  {
        return CHAR;
    }
    bool hasDecimal = false;
    bool isNumber = true;

    for (int i = 0; i < str.size(); ++i) {
        char c = str[i];
        if (!(c >= '0' && c <= '9')) {
            if (c == '.') {
                if (hasDecimal) {
                    isNumber = false;
                    break;
                }
                hasDecimal = true;
            } else {
                isNumber = false;
                break;
            }
        }
    }

    if (isNumber) {
        if( hasDecimal )
        return FLOAT ;
        else {
            return INTEGER;
        }
    }
    return STRING;
}
int stringToInt(const std::string& str) {
    int number= 0;
    for (size_t i = 0; i < str.size(); ++i) {
        number = number* 10 + (str[i] - '0');
    }
    return number;
}
float stringToFloat(const std::string& str) {
    float result = 0.0;
    float divisor = 10.0;
    bool decimalPoint = false;

    for (size_t i = 0; i < str.size(); ++i) {
        char c = str[i];
        if (c == '.') {
            decimalPoint = true;
        } else {
            if (decimalPoint) {
                result = result + (c - '0') / divisor;
                divisor *= 10.0;
            } else {
                result = result * 10.0 + (c - '0');
            }
        }
    }
    return result;
}
void copyString(char* dest, const std::string& src) {
    for (size_t i = 0; i < src.size(); ++i) {
        dest[i] = src[i];
    }
    dest[src.size()] = '\0';
}
Data createData(const std::string& str) {
    Data data;
    data.type = determineType(str);
    switch (data.type) {
        case INTEGER:
            data.typeVal.intVal= stringToInt(str);
            break;
        case FLOAT:
            data.typeVal.floatVal = stringToFloat(str);
            break;
        case STRING:
            copyString(data.typeVal.stringVal, str);
            break;
        case CHAR:
            data.typeVal.charVal = str[0];
            break;
    }
    return data;
}
int main() {
    std::ifstream file("input.txt");
    if (!file.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::string word;
        int start = 0;
        while (start < line.length()) {
            int  end = start;
            while (end < line.length() && !std::isspace(line[end])) {
                ++end;
            }
            word = line.substr(start, end - start);
            if (!word.empty()) {
                Data data = createData(word);
                data.print();
            }
            start = end + 1;
        }
    }

    file.close();
    return 0;
}


