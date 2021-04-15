#include <iostream>
#include <cmath>
#include "head5-6.h"

namespace fillout {
    void Fill(int (&n)[5]) {
        int y = 1;
        for (int i=0;i<5;i++){
           n[i] = y;
           y += 3;
        }
}

    void CheckBalance(int (&n)[5]) {
    
        bool check{};
        int sumb{};
        for (int i=0;i<5;i++)
            sumb +=n[i];     
    
        int sum;
        for (int j=1;j<=5;j++)  {
            sum = 0;
            for (int i=0;i<j;i++)  
                sum +=n[i];

            if (sum == (sumb-sum))
                check = 1; 
        
        }

        std::cout << "\nBalance check: " << std::boolalpha << check;  
    }
}

namespace operation {
    void Shift(int (&a)[5],int it){

        int b[5]{};
        int y{};
    
        for (int i=0; i<5; i++)
            b[i] = a[i];
    
        for (int i=0; i<5; i++) {
        
            if (((i-it) < 0) && ((i-it)%5 != 0))
                y = (5)-abs(i-it)%5;
            else y = abs(i-it)%5;           
                a[i] = b[y];
        
            if (it < 0)
            a[i] = b[(i-it)%5];
    
        }

    }

    void Swap() {

    }

}