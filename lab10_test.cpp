#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    string dbl = "190.8";
    double dub;
    int n = 0;
    while(dbl[n] != '.'){
        n++;
    }
    cout << n << endl;
    for(int i = 0; i < dbl.size(); i++){
        if(dbl[i] == '.'){
            ;
        }else{
            dub += pow(dbl[i],  n - (i + 1));
        }
        
    }

    cout << dub << endl;
}