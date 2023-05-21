#include <string>
using namespace std

int main() {

    // reference variable
    int exam_grade = 85;
    int& score = exam_grade; // must be intialized, cannot be reassigned

    // memory address
    cout << message << endl; // print value
    cout << &message << endl; // print memory address

    // pointers - stores memory address as its value
    int* age; // pointer to an int variable
    char* initial;

    string day = "Monday"; // set variable to value of Monday
    string* ptr = &day; // set pointer value to memory address of day
    *ptr = "Friday"; // change value of day
    cout << *ptr << endl;
    cout << day << endl;

    // dereference
    cout << ptr << endl; // print memory address of day
    cout << *ptr << endl; // use dereference operator to print value of day

    // null pointer
    int* ptr = nullptr; // keyword that provides a typesafe pointer values represnting an empty pointer
}