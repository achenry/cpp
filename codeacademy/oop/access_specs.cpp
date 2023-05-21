#include <iostream>

class Student {
    // private access specifier - all class members are declared private by default - good practise
    // achieves Encapsulation
    std::string name;
};

class Festival {
    // public access specifier - best reserved for methods not for attributes
    public:
        int firework;
};

class Clock {
    private:
        int time = 1200;
    
    public:
        // accessor functions/getter - public func that returns the value of a private member var
        int getTime() { // same return type as member variable being accessed
            return time;
        }
        // mutator function/setter - public func that sets the value of a private member var
        void setTime(int new_time) { // usually have return type void, single parameters
            time = new_time;
        }
};


// protected access specifier - sim to private but allows inherited classes to access those class members

int main() {

    Student clara;
    // clara.name = "Clara"; // illegal, name is a private attribute

    Festival christmas;
    christmas.firework = 100; // allowed

    Clock alarm;
    std::cout << alarm.getTime();
    alarm.setTime(930);
    std::cout << alarm.getTime();

    return 0;
}