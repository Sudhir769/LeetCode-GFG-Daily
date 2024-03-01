#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string maximumOddBinaryNumber(string s)
    {
        int n = s.size();
        int i = 0;
        string ans = string(n, '0');

        for (auto it : s)
        {
            if (it == '1')
            {
                if (ans[n - 1] == '1')
                {
                    ans[i] = '1';
                    i++;
                }
                else
                {
                    ans[n - 1] = '1';
                }
            }
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
