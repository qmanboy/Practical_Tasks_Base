#include <iostream>
 
int main() {
  
  int x,y;
  std::cout << "Enter first number > ";
  std:: cin >> x;
  std::cout << "Enter second number > ";
  std:: cin >> y;
  bool check = ((x==10) && (y==10)) || ((x+y)==10);
      std::cout <<"Check result: "<< std::boolalpha << check;
  
  return 0;
}