#include <iostream>
#include "income.hpp"

int main(int argc, char** argv) {
    std::cout << "Yearly income calculator" << std::endl;

    Income income;

    std::cout << "Type in income for following months." << std::endl;
    int i = 0;
    for (auto month: income.months) {
        double temp;
        std::cout << month << ": ";
        std::cin >> temp;
        income.total += temp;
        if (i == 0) {
            income.max = temp;
            income.min = temp;
        } else {
            if (temp > income.max) {
                income.max = temp;
            }

            if (temp < income.min) {
                income.min = temp;
            }
        }

        i++;
    }

    std::cout << "Total income: " << income.total << std::endl;
    std::cout << "Avarage income: " << income.get_avarage() << std::endl;
    std::cout << "Max income: " << income.max << std::endl;
    std::cout << "Min income: " << income.min << std::endl;

    std::getchar();
    return 0;
}