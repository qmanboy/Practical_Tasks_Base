#include <iostream>

#define LENGTH 20
#define TYPE double

#define ELEMENTS_COUNT(ar,type) (sizeof(ar))/(sizeof(type)) 

int main() {
    
    TYPE array[LENGTH]{};
    std::cout << ELEMENTS_COUNT(array,TYPE) << "\n";  

}