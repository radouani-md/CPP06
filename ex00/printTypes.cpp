#include "ScalarConverter.hpp"

void    print_char(double value, const std::string str)
{
    if (str == "+inff"|| str == "+inff"|| str == "nanf"
        || str == "+inf"|| str == "+inf"|| str == "nan")
        std::cout << "char: " << "Impossible" << std::endl;
    else if (!isprint(static_cast<int>(value)))
        std::cout << "char: " << "Non Displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(value) << std::endl;
    // std::cout << value << std::endl; 

}
void    print_int(double value)
{
    // Handel overflows
    if (static_cast<int>(value) > 2147483647 || static_cast<int>(value) < -2147483648)
        std::cout << "int: " << "Impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    
}
void    print_double(double value, const std::string str)
{
    if (!strchr(str.c_str(), '.'))
        std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(value) << std::endl;
}
void    print_float(double value, const std::string str)
{

    if (!strchr(str.c_str(), '.'))
        std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
}
