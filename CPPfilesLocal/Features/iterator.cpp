#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    // Create a vector of doubles
    std::vector<double> numbers = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    std::cout << "Vector contents using iterator: ";
    // Using explicit iterator to traverse the vector
    for (std::vector<double>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
    
    // Demonstrating other operations with iterators
    std::cout << "First element: " << *numbers.begin() << std::endl;
    std::cout << "Last element: " << *(numbers.end() - 1) << std::endl;
    
    // Using iterator to modify elements
    for (std::vector<double>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) {
        *iter = *iter * 2; // Double each value
    }
    
    std::cout << "After doubling: ";
    for (std::vector<double>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
    
    // Using iterators with STL algorithms
    std::vector<double>::iterator max_element = std::max_element(numbers.begin(), numbers.end());
    std::cout << "Maximum element: " << *max_element << std::endl;
    
    // Find an element using iterators
    std::vector<double>::iterator found = std::find(numbers.begin(), numbers.end(), 6.6);
    if (found != numbers.end()) {
        std::cout << "Found 6.6 at position: " << (found - numbers.begin()) << std::endl;
    } else {
        std::cout << "Element 6.6 not found" << std::endl;
    }
    
    // Calculate sum using iterator range with std::accumulate
    double sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);
    std::cout << "Sum of elements: " << sum << std::endl;
    
    return 0;
}