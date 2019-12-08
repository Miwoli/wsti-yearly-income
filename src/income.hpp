#ifndef INCOME_HPP
#define INCOME_HPP

#include <vector>
#include <string>

class Income {

    public:
        double total;
        double max;
        double min;
        std::vector<std::string> months;

        Income() {
            months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
            total = 0;
        }

        double get_avarage();
};

#endif