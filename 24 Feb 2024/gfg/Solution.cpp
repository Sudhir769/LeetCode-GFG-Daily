#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int solve(int n){
            if(n==0) return 0;
            
            int ans = 0;
            
            int a = solve(n/2);
            int b = solve(n/3);
            int c = solve(n/4);
            
            return max(n, a+b+c);
        }
        int maxSum(int n)
        {
            return solve(n);
        }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

