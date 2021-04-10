#include <iostream>

int main() {
    int x,y;
    std::cout << "Enter your number\n> ";
    std::cin >> x;  
    y = x < 21 ? 21-x : 2*(x-21);
    std::cout << "Result: " << y;

    return 0;
}