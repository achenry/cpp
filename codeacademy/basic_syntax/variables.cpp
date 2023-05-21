#include <string>

int main(){

    char letter;

    int number = 21;

    number = 18;

    int a = 1, b = 2, c = 3;

    int a = 1;
    double b = 2.2;

    const double pi = 3.14;

    // int, double, char, string, bool

    // int - 4 bytes, -2^31 -> 2^31
    int moonLanding = 1969;
    int age = 18;

    // double - 8 bytes, up to 15 decimal digits
    double pi = 3.1415
    double height = 1.75;

    // type conversion
    double a = 3.5;
    int b = (int) a; // just removes decimal

    int c = 5;
    double d = (double) c;

    // char - 1 byte
    char first_letter = 'a';

    // string
    std::string message = "Hello World!";

    // string methods - concatenation
    std::string first_word = "Hello";
    std::string second_word = "World";

    std:string message = first_word + " " + second_word;

    // string methods - char access
    std::string message = "Hello World";
    char letter = message[1];

    // string methods - length
    int message_length = message.length();

    // bool - 1 byte
    bool underaged = true;
    bool certified = false;
}