#include "calculator.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isValid(char digit){
    if(digit == '0'){
        return true;
    }else if(digit == '1'){
        return true;
    }else if(digit == '2'){
        return true;
    }else if(digit == '3'){
        return true;
    }else if(digit == '4'){
        return true;
    }else if(digit == '5'){
        return true;
    }else if(digit == '6'){
        return true;
    }else if(digit == '7'){
        return true;
    }else if(digit == '8'){
        return true;
    }else if(digit == '9'){
        return true;
    }else if(digit == '.'){
        return true;
    }

    return false;
}

double parse_number(const string &expression){
    
    string dbl = expression;
    double dub;
    int n = 0;
    bool afterDecimal = false;
    bool makeNegative = false;
    double tensPower;
    if(dbl[0] == '-'){
        makeNegative = true;
        dbl.erase(0, 1);
    }else if(dbl[0] == '+'){
        dbl.erase(0, 1);
    }
    
    while(dbl[n] != '.'){
        n++;
    }
    //cout << n << endl;
    //cout << dub << endl;
    for(int i = 0; i < dbl.size(); i++){
        if (isValid(dbl[i]) != true || (dbl[i] == '.') && afterDecimal == true){
            cout << "This string is invalid" << endl;
            return 0.0;
        }
        if(dbl[i] == '.'){
            afterDecimal = true;
        }else{
            //cout << "------------------" << endl;
            //cout << dbl[i] << endl;
            //cout << n - (i + 1) << endl;
            if(afterDecimal == true){
                dub += ((dbl[i] - '0') * pow(10, n - i));
            }else{
                dub += ((dbl[i] - '0') * pow(10, n - (i + 1)));
            }
            
            //cout << dub << endl;
        }
        
    }

    if(makeNegative == true){
        dub *= -1.0;
    }
    //cout << dub << endl;
    return dub;
}