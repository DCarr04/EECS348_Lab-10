#include <iostream>
#include <string>
#include <fstream>

#include "calculator.hpp"
using namespace std;

int main(int argc, char *argv[]) {
    string file;
    string line;
    
    cout << "Enter a file: ";
    cin >> file;
    ifstream myfile (file);
    if (myfile.is_open()){
        while(getline(myfile, line)){
            
            
            
        }
        

    }
    myfile.close();
}
