#include <iostream>
#include "head5-6.h"

int arr[5]{};

int main() { 
    
    void (*F)(int(&)[5]) = fillout::Fill;
    void (*Ch)(int(&)[5]) = fillout::CheckBalance;
    void (*Sh)(int(&)[5], int) = operation::Shift;    
    
    std::cout <<"Fill Result: ";

    (*F)(arr);

            for (int i=0;i<5;i++)
                std::cout << arr[i] << " ";
   
    (*Ch)(arr);

            std::cout <<"\nShift Result: ";

    (*Sh)(arr,4);

            for (int i=0;i<5;i++)
                std::cout << arr[i] << " ";
    
            std::cout <<"\n";

     operation::Swap (1,0,1,1,0);
    
    

}    
