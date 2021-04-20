#include <iostream>
#define INCL(X,Y) ((((X) >= 0) && ((X) < (Y))) ? (true) : (false))

int main() {
    std::cout << std::boolalpha << INCL(0,10);
}