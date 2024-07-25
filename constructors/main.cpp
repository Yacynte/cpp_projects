#include <iostream>

class Animal {
public:
    std::string name;
    int age;

    Animal(std::string n, int a) : name(n), age(a) {}

    void speak() {
        std::cout << "My name is " << name << " and I am " << age << " years old." << std::endl;
    }
};

int main() {
    Animal dog("Buddy", 5);
    dog.speak();
    return 0;
}
