#include "Base.hpp"
#include <ctime>
#include <stdlib.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base* generate(void)
{
    std::srand(std::time(NULL));
    int random = rand();
    if (random % 3 == 1)
        return (dynamic_cast<Base*>(new A));
    else if (random % 3 == 2)
        return (dynamic_cast<Base*>(new B));
    else
        return (dynamic_cast<Base*>(new C)); 
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "With Pointer: A Type class" << std::endl;
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "With Pointer: B Type class" << std::endl;
    }
    else if(dynamic_cast<C*>(p))
    {
        std::cout << "With Pointer: C Type class" << std::endl;
    }
}

void identify(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "With Ref: A Type class" << std::endl;
    else if (dynamic_cast<B*>(&p))
    {
        std::cout << "With Ref: B Type class" << std::endl;
    }
    else if(dynamic_cast<C*>(&p))
    {
        std::cout << "With Ref: C Type class" << std::endl;
    }
}