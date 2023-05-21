#include <iostream>

// base class
class Animal {
	private:
		std::string gender;
		int age;
	
	public:
		Animal(std::string new_gender, int new_age) 
			: gender(new_gender), age(new_age) {}
};

// derived class
class Dog: public Animal {
	private:
		std::string breed;
	
	public:
		// call base class constructor
		Dog(std::string new_gender, int new_age, std::string new_breed)
			: Animal(new_gender, new_age), breed(new_breed) {}

		void sound() {
			std::cout << "Woof\n";
		}
};

// multilevel inheritence
class A { // A is the base class
  public:
		int a;
		A() {std::cout << "Constructing A\n";}
};

class B: public A { // class B inherits from class A
	public:
		int b;

		B() { std::cout << "Constructing B\n"; }
};

class C: public B { // class C inherits from class B
	public:
		int c;

		C() { std:: cout << "Constructing C\n"; }

};

// public inheritence (access specifiers unchanged), protected inheritance (public, protected -> protected), private inheritance (all members -> private)

int main() {
	Dog buddy("male", 8, "Husky");

	buddy.sound();

	C example;

	return 0;
}