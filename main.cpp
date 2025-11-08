#include <iostream>

long long factorial(int n) {
    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    std::cout << "C++ standard version: " << __cplusplus << std::endl;
    
    int number = 5;
    long long fact = factorial(number);

    std::cout << "The factorial of " << number << " is " << fact << std::endl;

    return 0;
}

