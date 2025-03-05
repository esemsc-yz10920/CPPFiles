// header file for Date class

#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
    private:
        int y, m, d;
    
    public:
        Date(int y, int m, int d);
        void print();
};

#endif