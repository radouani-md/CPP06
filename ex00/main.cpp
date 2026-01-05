#include "ScalarConverter.hpp"


int main(int argc, char **argv) {
    (void)argc;
    // (void)argv;
    // float x = 1e-6;
    if (argc != 2)
        return (std::cout << "Need Two arguments please !" << std::endl, 1);
    
    // double value = std::strtold(argv[1], NULL);
    // std::cout << value << std::endl;
    ScalarConverter::convert(argv[1]);

    // 12.
    return 0;
}