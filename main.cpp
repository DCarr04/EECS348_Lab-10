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
            //string* line_ptr = &line;
            //cout << line << endl;
            double parsedNum = parse_number(line);
            if(parsedNum != 0.0033909){
                add_numbers(parsedNum);
            }
            
        }
        

    }
    myfile.close();
    cout << 400.20 + -123.456 << endl;
}
