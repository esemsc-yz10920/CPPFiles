#include <iostream>
using namespace std;

// Example of using enum

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    Color c = BLUE;
    switch (c) {
        case RED:
            cout << "Red" << endl;
            break;
        case GREEN:
            cout << "Green" << endl;
            break;
        case BLUE:
            cout << "Blue" << endl;
            break;
    }
}