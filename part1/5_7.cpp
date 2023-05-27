// Define a table for the names of the months of the year and the number of days in each month.
// Write out that table.
// Do this twice, once using an array of char for the names and an array for the number of days,
//  and once using an array of structures, with each structure holding hte name of a month and the number of days in it.

#include <iostream>

const int n_months = 12;
const char *month_name[n_months] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
const int month_length[n_months] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Month {
    const char* name_;
    int length_;
};

const Month months[n_months] = {{"Jan", 31}, {"Feb", 28}, {"Mar", 31}, {"Apr", 30}, {"May", 31}, {"Jun", 30}, 
                                {"Jul", 31}, {"Aug", 31}, {"Sep", 30}, {"Oct", 31}, {"Nov", 30}, {"Dec", 31}};

int main() {

    for (int k = 0; k != n_months; ++k) {
        std::cout << month_name[k] << ":\t"
                  << month_length[k] << std::endl;

        std::cout << months[k].name_ << ":\t"
                  << months[k].length_ << std::endl;
    }

    return 0;
}