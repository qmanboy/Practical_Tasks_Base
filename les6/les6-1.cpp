#include <iostream>
#include <fstream>


void CreateRecordFile(const char filename[], size_t lenght, bool symboltype){ //symboltype = 0 - numbers, symboltype = 1 - letters
    std::ofstream outf (filename);
    if (!outf)
        std::cout << "Access error.";    
    else {
        unsigned symbol_id = 48;
        if (symboltype)
            symbol_id = 97;
        
        for (size_t i = 0; i<lenght; i++){
            outf << (char)(symbol_id + rand() %10 + 0);
        }
        outf.close();
        std::cout << "File " << filename << " created/recorded.\n";
    }
  
}


int main() {
    
    CreateRecordFile("file1.txt", 57, 1);
    CreateRecordFile("file2.txt", 75, 0);

}   