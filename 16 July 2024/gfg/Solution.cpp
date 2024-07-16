#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string printString(string s, char ch, int count)
    {
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch)
            {
                count--;
            }
            if (count == 0 and i != n - 1)
            {
                return s.substr(i + 1);
            }
        }
        return "";
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

