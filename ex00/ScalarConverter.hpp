# ifndef __SCALARCONVERTER_HPP__
# define __SCALARCONVERTER_HPP__

#include <iostream>
#include <sstream>
#include <cstring>
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


void    print_char(double value, const std::string str);
void    print_int(double value);
void    print_double(double value, const std::string str);
void    print_float(double value, const std::string str);


#endif