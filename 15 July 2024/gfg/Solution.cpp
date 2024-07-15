#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string smallestNumber(int s, int d) {
        string ans;
        d--;
        while(d>0){
            int t = s-1;
            if(t>=9){
                ans+=to_string(9);  
                s-=9;
            }
            else if(t<0){
                ans+=to_string(0);
            }
            else {
                ans+=to_string(t);
                s-=t;
            }
            d--;
        }
        if(s>9)return to_string(-1);
        ans+=to_string(s);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

