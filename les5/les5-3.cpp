#include <iostream>

const int x = 5;

void checkBalance(int (&n)[x]) {
    
    bool check{};
    int sumb{};
    for (int i=0;i<x;i++)
            sumb +=n[i];     
    
    int sum;
    for (int j=1;j<=x;j++)  {
        sum = 0;
        for (int i=0;i<j;i++)  
            sum +=n[i];

        if (sum == (sumb-sum))
        check = 1; 
        
    }

    std::cout << "\n" << std::boolalpha << check;  
}

int main() {
    
    int arr[x] ={1,1,1,2,1};    
    
    for (int i=0;i<x;i++)
       {
           
           std::cout << arr[i] << " "; 
       }

checkBalance(arr);
}    