#include <iostream>

class Animal {
public:
    std::string name;
    int age;

    void speak() {
        std::cout << "My name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    Animal dog;
    dog.name = "Buddy";
    dog.age = 5;
    dog.speak();
    return 0;
}
