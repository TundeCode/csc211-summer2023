// Write methods that:
// add_years, which adds a number of years to the current date
// add_months, which adds a number of months to the current date
// add_days, which adds a number of days to the current date

#include <iostream>

class Date {
    private:
        int month;
        int year;
        int day;

    public:
        
        void set(int m, int d, int y);
        void print();
        void addYears(int year);
        void addMonths(int month);
        void addDay(int day);
};

void Date::print() {
    std::cout << month << '-'  << day << '-'  << year << std::endl;
}


void Date::set(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

void Date::addYears(int year){
    this->year += year;
}

void Date::addMonths(int month){
    this->month += month;
}

void Date::addDay(int day){
    this->day += day;

}

int main(){

    Date today;

    today.set(11, 04, 2023);
    today.print();
    today.addYears(1);
    today.addMonths(1);
    today.addDay(1);
    today.print();

    return 0;
}