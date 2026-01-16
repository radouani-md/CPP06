# ifndef __SERIALIZER_HPP__
# define __SERIALIZER_HPP__

#include <iostream>
#include <stdint.h>

#include "Data.hpp" 

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer& obj);
        Serializer& operator=(const Serializer& obj);
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw );
};


class B
{};
#endif