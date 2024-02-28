#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int DivisibleByEight(string s)
    {
        s = "00" + s;
        int n = stoi(s.substr(s.length() - 3, 3));
        if (n % 8 == 0)
            return 1;
        else
            return -1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

