#include <iostream>

// classes - class members include attributes/member variables and methods/member functions
class School {
    public: // access specifier that allows members to be directly accessed outside of the class
        std::string name; // attribute
        int age; // attribute

        void banner();
        // { // method
        //     std::cout << name << " is " << age << " years old.\n";
        // }
}; 

// defining methods outside of a class - must still be declared within class, even if we can define it outside
void School::banner() {
    std::cout << name << " is " << age << " years old. \n";
}

int main() {
    // objects
    School codecademy;

    // can access and modify class attributes that were declared under public
    codecademy.name = "Codecademy";
    codecademy.age = 10;

    // ... and methods
    codecademy.banner();

    // different instance of class
    School harvard;
    harvard.name = "Harvard";
    harvard.age = 385;
    harvard.banner();
}