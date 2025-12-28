#include "ScalarConverter.hpp"


bool isDouble(const std::string& s) {
    std::istringstream iss(s);
    double d;
    iss >> d;
    return iss.eof() && !iss.fail();
}

int main() {
   ScalarConverter::convert("12.25");
   
    return 0;
}