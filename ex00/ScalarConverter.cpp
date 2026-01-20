#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& obj){(void)obj;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj){(void)obj;return *this;}
ScalarConverter::~ScalarConverter(){}

template <typename T1> 
void printin(std::string str[], T1 nb)
{
    for (int i = 0; i < 4; i++)
    {
        if (str[i] == "char: ")
            print_char(nb);
        else if (str[i] == "int: ")
            print_int(nb);
        else if (str[i] == "float: ")
            print_float(nb);
        else if (str[i] == "double: ")
            print_double(nb);        
    }
}


bool is_int(const std::string& s) 
{
    std::string str[4] = {"char: ", "int: ", "float: ", "double: "};
    std::stringstream iss(s);
    int value;
    iss >> value;
    if (!iss.fail() && iss.eof())
    {
        printin(str, value);
        return (true);
    }
    return (false);
}


bool is_float(const std::string& s) 
{
    float value;
    char *end;
    std::string str[4] = {"char: ", "int: ", "float: ", "double: "};
    value = std::strtold(s.c_str(), &end);
    if (std::string("f") != end)
        return (false);
    if (s.find("inf") == std::string::npos && s.find("nan") == std::string::npos)
    {
        if ((s.find(".") == std::string::npos && s.find("e") == std::string::npos))
            return (false);
        std::cout << "ss\n";
        std::stringstream iss(s);
        std::stringstream check;
        iss >> value;
        if (iss.fail())
            return (false);
        check << value;
        check >> value;
        if (check.fail())
            return (false);
    }
    printin(str, value);
    return (true);
}


bool is_double(const std::string& s) 
{
    double value;
    char *end;
    std::string str[4] = {"char: ", "int: ", "float: ", "double: "};
    value = std::strtold(s.c_str(), &end);
    if (*end)
        return (false);
    if (s.find("inf") == std::string::npos && s.find("nan") == std::string::npos)
    {
        std::stringstream iss(s);
        std::stringstream check;
        iss >> value;
        if (iss.fail())
            return (false);
        check << value;
        check >> value;
        if (check.fail())
            return (false);
    }
    printin(str, value);
    return (true);
}

bool is_char(const std::string& s)
{
    std::string str[4] = {"char: ", "int: ", "float: ", "double: "};
    std::stringstream iss(s);
    char value;
    iss >> value;
    if (s.size() == 1 && !isdigit(s[0]))
    {
        printin(str, value);
        return (true);
    }
    return (false);
}

void ScalarConverter::convert(const std::string& str)
{

    if (is_int(str))
        return ;
    else if (is_float(str))
        return ;
    else if (is_double(str))
        return ;
    else if (is_char(str))
        return ;
    else
    {
        std::cout << "ERROR" << std::endl;
        return ;
    }
}

