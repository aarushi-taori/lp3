// Iterative
#include <iostream>  // For input and output

int fibonacci_iterative(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    std::cout << "Enter the position for Fibonacci sequence (n): ";
    std::cin >> n;
    std::cout << "Iterative Fibonacci of " << n << " is: " << fibonacci_iterative(n) << std::endl;
    return 0;
}

//Recursive
#include <iostream>  // For input and output

int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() {
    int n;
    std::cout << "Enter the position for Fibonacci sequence (n): ";
    std::cin >> n;
    std::cout << "Recursive Fibonacci of " << n << " is: " << fibonacci_recursive(n) << std::endl;
    return 0;
}
