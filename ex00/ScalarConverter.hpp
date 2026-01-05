# ifndef __SCALARCONVERTER_HPP__
# define __SCALARCONVERTER_HPP__

#include <iostream>
#include <sstream>
#include <cstring>
#include <cmath>
#include <bits/stdc++.h>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& obj);
        ScalarConverter& operator=(const ScalarConverter& obj);
        ~ScalarConverter();

    public:
        static void convert(const std::string& str);
};


template <typename T1> 
void print_char(T1 nb)
{
    if (!isascii(nb))
        std::cout << "char: " << "Impossible" << std::endl;
    else if (!isprint(static_cast<unsigned char>(nb)))
        std::cout << "char: " << "Non Displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
}

template <typename T1> 
void print_int(T1 nb)
{
    
    if ((long)nb > INT_MAX || (long)nb < INT_MIN)
        std::cout << "int: " << "Impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
}

template <typename T1> 
void print_double(T1 nb)
{
    if (nb == static_cast<int>(nb))
         std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

template <typename T1> 
void print_float(T1 nb)
{
    if ((double)nb > MAXFLOAT)
        std::cout << "float: " << "Impossible" << std::endl;
    else if (nb == static_cast<int>(nb))
        std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
}
#endif