// #include "ex00/ScalarConverter.hpp"

// #include <vector>

// class Entity {
// public:
//     virtual ~Entity() {}
// };

// class Player : public Entity {
// public:
//     int health;

//     Player() : health(100) {}

//     void attack() {
//         std::cout << "Player attacks, health = " << health << std::endl;
//     }
// };

// class Tree : public Entity {
// public:
//     int height;

//     Tree() : height(10) {}
// };


// int main()
// {
//     std::vector<Entity*> world;

//     Player a;
//     Tree b;
//     world.push_back(&a);
//     world.push_back(&b);
//     for (size_t i = 0; i < world.size(); i++) {
//         Player* p = dynamic_cast<Player*>(world[i]);
//         if (p)
//             p->attack();
//     }   
   
// }