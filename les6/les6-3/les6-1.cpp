#include <iostream>
#include <fstream>
#include <string>

bool SearchInFile(const char filename[], std::string keyword) {
    
    std::ifstream file(filename);
    if (!file)
        std::cout << "Failed to open.";
    else {
        std::string* buff = new std::string;        
        while (!file.eof()) {
            getline (file, buff, ' ');
            if (buff==keyword)
                return true;
        }
    file.close(); 
    }       
return false;
}

int main() {

    std::cout << std::boolalpha << SearchInFile("task3lesson6.txt", "the");
    

}   