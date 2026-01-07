#include "Data.hpp"
#include "Serializer.hpp"


int main()
{
    // Data data;
    // data.member = 1337;
    // data.str = "School";
    
    // std::cout << "data address: " << &data << std::endl;
    
    // uintptr_t result = Serializer::serialize(&data);

    // // std::cout << "Deserialized address: " << result << std::endl;

    // Data *data2 = Serializer::deserialize(result);

    // std::cout << "Deserialized address: " << data2 << std::endl;

    // if (data2 == &data)
    //     std::cout << "Same address" << std::endl;
    // else
    //     std::cout << "Different address" << std::endl;

    int a = 5;
    int *p = &a;

    std::cout << &a << std::endl;
    uintptr_t g = reinterpret_cast<uintptr_t>(p);


    std::cout << g << std::endl;
    std::cout << reinterpret_cast<int*>(g) << std::endl;
}