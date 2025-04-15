#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    string dbl = "-0000190.8";
    double dub;
    int n = 0;
    bool afterDecimal = false;
    bool makeNegative = false;
    double tensPower;
    if(dbl[0] == '-'){
        makeNegative = true;
    }
    dbl.erase(0, 1);
    while(dbl[n] != '.'){
        n++;
    }
    cout << n << endl;
    cout << dub << endl;
    for(int i = 0; i < dbl.size(); i++){
        if(dbl[i] == '.'){
            afterDecimal = true;
        }else{
            cout << "------------------" << endl;
            cout << dbl[i] << endl;
            cout << n - (i + 1) << endl;
            if(afterDecimal == true){
                dub += ((dbl[i] - '0') * pow(10, n - i));
            }else{
                dub += ((dbl[i] - '0') * pow(10, n - (i + 1)));
            }
            
            cout << dub << endl;
        }
        
    }

    if(makeNegative == true){
        dub *= -1.0;
    }
    cout << dub << endl;
}