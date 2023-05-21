#include <iostream>

class House {
    private:
        std::string location;
        int rooms;
    
    public:
        // default constructor - takes no parameters
        // House();
        // { // no return type, same name as class
        //     location = "New York";
        //     rooms = 5;
        // }

        // constructor with 2 parameters - permitted by function overloading
        // House(std::string loc, int num) {
        //     location = loc;
        //     rooms = num;
        // }

        // constructor with default parameters
        House(std::string loc = "New York", int num = 5) {
            location = loc;
            rooms = num;
        }

        // destructor - called when an object is destroyed ie when it moves out of scope or is explicitl deleted
        ~House() {
            std::cout << "Moved away from " << location;
        }

        void summary() {
            std::cout << location << " house with " << rooms << " rooms. \n";
        }
};

// define constructors outside of class
// House::House() {
//     location = "New York";
//     rooms = 5;
// }

class Book {
    private:
        // const or reference variables must be initialized when they are declared, so assignment in constructor won't work
        const std::string title;
        const int pages;
    public:
        Book()
            : title("Diary"), pages(100) {} // member initializer list
};

int main() {

    House red_house; // default constructor invoked
    red_house.summary();

    House green_house("Boston", 3); // constructor with params invoked
    green_house.summary();

    House blue_house("Florida");
    blue_house.summary();

    // House purple_house(10); // error - no constructor to handle House(int)

    return 0;
}