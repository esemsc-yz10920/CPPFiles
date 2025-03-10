#include <iostream>
#include <numeric>
#include <vector>
#include <limits>

template <typename T>
T factorial(T n) {
    if (n == 0 || n == 1) return 1;
    
    std::vector<T> numbers(n);
    // Fill with 1, 2, 3, ..., n
    std::iota(numbers.begin(), numbers.end(), 1);
    
    // Multiply all numbers together
    return std::accumulate(numbers.begin(), numbers.end(), 1, 
                          std::multiplies<T>());
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cerr << "Error: Factorial of a negative number is undefined." << std::endl;
        return 1;
    }
    
    // Choose appropriate type based on input size
    if (n <= 12) {
        // Safe for int (up to 12!)
        std::cout << n << "! = " << factorial<int>(n) << std::endl;
    } 
    else if (n <= 20) {
        // Use unsigned long long for 13! to 20!
        std::cout << n << "! = " << factorial<unsigned long long>(n) << std::endl;
    }
    else if (n <= 170) {
        // Use double for larger values (with potential precision loss)
        std::cout << n << "! (approximation) = " << factorial<double>(n) << std::endl;
    }
    else {
        std::cout << "Value too large to compute with built-in types!" << std::endl;
        // Could add a call to a BigInteger implementation here
    }
    
    return 0;
}