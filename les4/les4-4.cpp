#include <iostream>
 
int main() {
  int year{};
  bool leap{};  
    do {
     
      std::cout << "Enter year (enter 0 to exit)\n> ";
      std:: cin >> year; 

      leap = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0); 
      
      if (leap)
        std::cout << " Leap year \n";
      else if (year!=0)
        std::cout << " Not leap year \n"; 
                      
    } while (year != 0);
  
  return 0;
}