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
        
        for (size_t i = 0; i<lenght; i++)
            outf << (char)(symbol_id + rand() %10 + 0);
                
        outf.close();
        
        std::cout << "File " << filename << " created/recorded.\n";
    }
  
}



int Size(std::ifstream& fin) {
    fin.seekg(0, std::ios::end);
    return fin.tellg();    
}


void FilesUnity(const char final_file[],const char  first_file[], const char second_file[]) {
    
    struct lenght {
        int len1;
        int len2;
        int total;
    };

    std::ifstream file_1 (first_file);
    std::ifstream file_2 (second_file);
    
    if (!file_1)
        std::cout << "Failed to open " << first_file <<"\n";
    else if (!file_2)
        std::cout << "Failed to open " << second_file <<"\n";
    else {    
        lenght len{};
        len.len1 = Size(file_1);
        len.len2 = Size(file_2);
        len.total = len.len1 + len.len2;
                   
        file_1.seekg(0, std::ios::beg);            
        file_2.seekg(0, std::ios::beg);

        char* buffer = new char[len.total];    

            for (size_t i = 0; i < (len.total); i++) {
                if (i < len.len1)
                    file_1 >> buffer[i];
                else 
                    file_2 >> buffer[i];
            }
                
    
        file_1.close();
        file_2.close();
    
        std::ofstream fin_file (final_file);    
        
            fin_file.write(buffer,len.total);
         
            delete[] buffer;
        
        fin_file.close();   
    
    }    
std::cout << "Unity is complete to " << final_file;    
}

int main() {
    
    CreateRecordFile("file1.txt", 55, 0);
    CreateRecordFile("file2.txt", 70, 1);
    FilesUnity("final.txt", "file1.txt", "file2.txt");

}   