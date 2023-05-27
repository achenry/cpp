// Define a struct Date to keep track of dates.
// Provide functions that read Dates from input, write Dates to output, and initialize a Date with a date.

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

struct Date {
    unsigned day_: 5; // bitfield: use only 5 bits to represent this integer number
    unsigned month_: 4;
    int year_: 15;

    // void read();
    // void write();
    // Date init(unsigned, unsigned, int)
};

Date& init(Date &d, unsigned day, unsigned month, int year) {
    d.day_ = day;
    d.month_ = month;
    d.year_ = year;
    return d;
}

std::istream& operator>>(std::istream &input, Date &d) {
    int const buf_size = 6;
    char buffer[buf_size];

    input.getline(buffer, buf_size, '/');
    d.month_ = atoi(buffer);

    input.getline(buffer, buf_size, '/');
    d.day_ = atoi(buffer);
    input >> d.year_;

    return input
}

std::ostream& operator<<(std::ostream &output, Date &d) {
    output << d.month_ << '/' << d.day_ << '/' << d.year_;
    return output;
}