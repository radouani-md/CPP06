#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
    (void)argc;
    if (argc != 2)
        return (std::cout << "Need Two arguments please !" << std::endl, 1);
    ScalarConverter::convert(argv[1]);
    return (0);
}