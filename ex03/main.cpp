#include "B.hpp"
#include "A.hpp"
#include "C.hpp"



int main()
{
    Base bs;
    Base *bs1 = &bs;

    A a;
    B b;
    C c;
    B &d = b;

    bs1 = generate();

    identify(bs1);
    identify(d);
    delete bs1;
}