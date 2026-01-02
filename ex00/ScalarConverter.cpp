#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& obj){(void)obj;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj){(void)obj;return *this;}
ScalarConverter::~ScalarConverter(){}

bool is_int(const std::string& s) 
{
    std::stringstream iss(s);
    int value;
    iss >> value;

    return (!iss.fail() && iss.eof());
}

bool is_float(const std::string& s) 
{

    if (s[s.size() - 1] != 'f')
        return false;
    if (s == "+inff"|| s == "+inff"|| s == "nanf")
        return (true);
    std::string tmp = s.substr(0, s.size() - 1);
    std::stringstream iss(tmp);
    float value;
    iss >> value;    
    return (!iss.fail() && iss.eof()) ;
}

void to_double(const std::string& s, double& value, bool isChar)
{
    if (isChar)
    {
        value = static_cast<double>(s[0]);
        return ;
    }
    std::stringstream ss(s);
    ss >> value;
    return ;
}

bool is_double(const std::string& s) 
{
    if (s == "+inf"|| s == "+inf"|| s == "nan")
        return (true);
    std::stringstream iss(s);
    double value;
    iss >> value;
    return (!iss.fail() && iss.eof()) ;
}

bool is_char(const std::string& s)
{
    return (s.size() == 1 && !isdigit(s[0]));
}

void    printing_types(double val, const std::string str)
{
    print_char(val, str);
    print_int(val);
    print_float(val, str);
    print_double(val, str);
}

void ScalarConverter::convert(const std::string& str)
{
    double value;

    if (is_int(str))
        to_double(str, value, false);
    else if (is_float(str))
        to_double(str, value, false);
    else if (is_double(str))
        to_double(str, value, false);
    else if (is_char(str))
        to_double(str, value, true);
    else
    {
        std::cout << "ERROR" << std::endl;
        return ;
    }
    printing_types(value, str);
}

