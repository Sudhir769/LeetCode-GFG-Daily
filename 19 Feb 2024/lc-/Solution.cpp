#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return (n & (n-1)) == 0;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
