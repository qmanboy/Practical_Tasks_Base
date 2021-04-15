#include <iostream>

const int x = 8;

void fill(int (&n)[x]) {
   int y = 1;
   for (int i=0;i<x;i++)
       {
           n[i] = y;
           y += 3;
       }
       
}

int main() {
    int arr[x] {};
        
    fill(arr);
    

    for (int i=0;i<x;i++)
       {
           std::cout << arr[i] << " "; 
       }
}    