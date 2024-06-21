#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    double fractionToDecimal(string &fraction){
        int pos = fraction.find('/');
        if(pos == string::npos){
            return 0.0;
        }
        int numerator = stoi(fraction.substr(0, pos));
        int denominator = stoi(fraction.substr(pos+1));
        
        return (double)(numerator)/denominator;
    }
    
    string compareFrac(string str) {
        int pos = str.find(",");
        
        string frac1 = str.substr(0, pos);
        string frac2 = str.substr(pos+2);
        
        double num1 = fractionToDecimal(frac1);
        double num2 = fractionToDecimal(frac2);
        
        if(num1 == num2){
            return "equal";
        }
        return num1 > num2 ? frac1: frac2;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

