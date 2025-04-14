#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    string dbl = "190.8";
    double dub;
    int n = 0;
    bool afterDecimal = false;
    double tensPower;
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

    cout << dub << endl;
}