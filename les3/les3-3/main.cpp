#include <iostream>

int main() {
  extern const int a,b,c,d;
  std::cout << a*(b+(c/(float)d));

  return 0;
}