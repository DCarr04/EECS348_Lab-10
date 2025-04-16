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
    if (expression[0] == '-'){
        
    }
}