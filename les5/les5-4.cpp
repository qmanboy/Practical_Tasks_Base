#include <iostream>
#include <cmath>

const int x = 6;;

void Shift(int (&a)[x],int &it){

    int b[x]{};
    int y{};
    
    for (int i=0; i<x; i++)
        b[i] = a[i];
    
    for (int i=0; i<x; i++) {
        
        if (((i-it) < 0) && ((i-it)%x != 0))
            y = (x)-abs(i-it)%x;
        else y = abs(i-it)%x;           
            a[i] = b[y];
        
        if (it < 0)
        a[i] = b[(i-it)%x];
    
    }

}

int main() {
    int its{};
    std::cout << ">";
    std::cin >> its;

    int arr[x] = {1,2,3,4,5,6};
    
    Shift(arr,its);    
    
    for (int i=0; i<x; i++) 
        std::cout << arr[i] << " ";
}