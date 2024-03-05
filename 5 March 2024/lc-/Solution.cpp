#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumLength(string s)
    {

        int n = s.size(), l = 0, r = n - 1;

        for (; l < r and s[l] == s[r]; l++, r--)
        {
            while (s[l] == s[l + 1] and l + 1 < r)
                l++;
            while (s[r] == s[r - 1] and l < r - 1)
                r--;
        }
        return r - l + 1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
