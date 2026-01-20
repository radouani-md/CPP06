# ifndef __A_HPP__
# define __A_HPP__

#include <iostream>
#include "Base.hpp"


class A : public Base
{
    public:
    
    virtual void makesound()
    {
        std::cout << "From A" << std::endl;
    }
};

#endif