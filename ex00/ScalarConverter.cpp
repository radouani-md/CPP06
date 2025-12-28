#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& obj){(void)obj;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj){(void)obj;return *this;}
ScalarConverter::~ScalarConverter(){}

bool is_int(const std::string& s) 
{
    std::stringstream iss(s);
    int value;
    return (iss >> value && iss.eof());
}
bool is_float(const std::string& s) 
{
    std::stringstream iss(s);
    float value;
    iss >> value;
    if (!iss)
        return (false);
    iss.clear();
    int offset = iss.tellg();
    return (s[offset] == 'f' && strchr(s.c_str(), '.')) ;
}
bool is_double(const std::string& s) 
{
    std::stringstream iss(s);
    double value;
    iss >> value;
    if (!iss)
        return (false);
    return (strchr(s.c_str(), '.')) ;
}
bool is_char(const std::string& s)
{
    std::stringstream iss(s);
    char value;
    iss >> value;
    if (!iss)
        return (false);
    return () ;
}

void ScalarConverter::convert(const std::string& str)
{
    if (is_int(str))
        std::cout << "value is " << "Int" << std::endl;
    else if (is_float(str))
        std::cout << "value is " << "Float" << std::endl;
    else if (is_double(str))
        std::cout << "value is " << "Double" << std::endl;
    
}

