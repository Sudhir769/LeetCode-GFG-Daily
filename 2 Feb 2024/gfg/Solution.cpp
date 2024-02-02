#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    /*You are required to complete this method */
    int atoi(string s) {
        bool isNegative = false;
        int i = 0;
        if(s[i]=='-'){
            isNegative = true;
            i++;
        }
        int ans = 0;
        
        for(; i<s.size(); i++){
            if(isdigit(s[i])){
                ans = ans * 10 + (s[i]-'0');
            }else{
                return -1;
            }
        }
        if(isNegative){
            ans = ans*(-1);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

