#include <iostream>
 
int main() {
  int num,k;  
    do {
     
      k = 0;
      std::cout << "Enter your number (enter 0 to exit)\n> ";
      std:: cin >> num; 

      for (int i = 1; i <= num; i++) 
        if ((num % i) == 0) 
          k++;
       
      if (k == 2)
        std::cout << " Prime number \n";
      else if (num != 0)
        std::cout << " Not prime number \n"; 
                      
    } while (num != 0);
  
  return 0;
}