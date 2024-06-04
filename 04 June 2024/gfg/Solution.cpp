#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string binaryNextNumber(string s) {
        int n = s.length();
        int i=n-1;
        
        while(s[i] == '1'){
            s[i] = '0';
            i--;
        }
        if(i<0){
            s = '1' + s;
        }else{
            s[i] = '1';
        }
        
        i=0;
        while(s[i] == '0'){
            i++;
        }
        return s.substr(i, n-i+1);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

