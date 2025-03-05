#include "date.h"
#include <iostream>

class Date {
    private:
        int y, m, d;
    
    public:
        Date(int yy, int mm, int dd);
        void add_day(int n);
        void add_month(int n);
        void add_year(int n);
        int year() { return y; }
        int month() { return m; }
        int day() { return d; }
};

Date::Date(int yy, int mm, int dd) {
    if (mm < 1 || mm > 12) {
        std::cerr << "Invalid month" << std::endl;
        exit(1);
    }

    int days_in_month;
    switch (mm) {
        case 2:
            // Check for leap year
            if (yy % 4 == 0 && (yy % 100 != 0 || yy % 400 == 0)) {
                days_in_month = 29;
            } else {
                days_in_month = 28;
            }
            break;
        case 4: case 6: case 9: case 11:
            days_in_month = 30;
            break;
        default:
            days_in_month = 31;
    }

    if (dd < 1 || dd > days_in_month) {
        std::cerr << "Invalid day" << std::endl;
        exit(1);
    }

    y = yy;
    m = mm;
    d = dd;
}

void Date::add_day(int n) {
    d += n;
    if (d > 31) {
        d -= 31;
        add_month(1);
    }
}

void Date::add_month(int n) {
    m += n;
    if (m > 12) {
        m -= 12;
        add_year(1);
    }
}

void Date::add_year(int n) {
    y += n;
}
