#include <iostream>

const int x = 7;

void swap(int (&n)[x]) {

   for (int i=0;i<x;i++)
       {
           n[i] = !(n[i]);
       }
       
}

int main() {
    int arr[x] = {1, 1, 0, 0, 1, 1, 0};
        
    swap(arr);
    
    for (int i=0;i<x;i++)
       {
           std::cout << arr[i] << " "; 
       }
    
}