#include <iostream>
#include <iomanip>
#define LINE_AMT 5
#define COL_AMT 5    
#define INCL(ar,x,y) (*(*((ar)+y)+x))  //x - строка, y - столбец

int main() {
    
    int **array = new int* [LINE_AMT];
    for (size_t i=0; i < LINE_AMT ; i++)
        array[i] = new int [COL_AMT];
    
    int k{};
    
    for (size_t i=0; i < LINE_AMT; i++) {
        for (size_t j=0;j < COL_AMT; j++) {
            array[i][j] = k ++;
            std::cout << std::setw(2) << array[i][j] << " ";
        }
        std::cout << "\n" ;
    }

    std::cout << "\n";
            
    std::cout << INCL(array,4,3);
    
    for (size_t i=0; i < LINE_AMT ; i++)
            delete[] array[i];
    delete[] array;

}