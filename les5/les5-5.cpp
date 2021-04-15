#include <iostream>

void swap() {

}

template <typename FirstType, typename... Types>
void swap(FirstType first_arg, Types... args) {
    std::cout << !first_arg << " ";
    swap(args...);   
}

int main() {        
    
    swap(1,1,0,0,1,1,0);

}    
