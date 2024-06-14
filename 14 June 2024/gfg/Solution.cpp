#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string armstrongNumber(int n) {
        int check = n;
        int sum = 0;
        while(n != 0){
            sum += pow(n%10,3);
            n = (n-n%10)/10;
        }
        return (sum==check)?"true":"false";
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

