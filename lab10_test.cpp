#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    string dbl = "190.8";
    double dub;
    int n = 0;
    double tensPower;
    while(dbl[n] != '.'){
        n++;
    }
    cout << n << endl;
    cout << dub << endl;
    for(int i = 0; i < dbl.size(); i++){
        if(dbl[i] == '.'){
            ;
        }else{
            cout << "------------------" << endl;
            cout << dbl[i] << endl;
            cout << n - (i + 1) << endl;
            tensPower = pow(10, n - (i + 1));
            dub += ((dbl[i] - '0') * tensPower);
            //cout << pow(dbl[i],  10 * (n - (i + 1))) << endl;
            //dub += pow(dbl[i],  10 * (n - (i + 1)));
            cout << (dbl[i] - '0') * pow(10, n - (i + 1)) << endl;
            cout << tensPower << endl;
            cout << dub << endl;
        }
        
    }

    cout << dub << endl;
}