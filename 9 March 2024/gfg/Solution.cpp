#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    char nthCharacter(string s, int r, int n)
    {
        while (r--)
        {
            string temp;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == '1')
                {
                    temp += "10";
                }
                else
                {
                    temp += "01";
                }
                if (temp.length() > s.length())
                    break;
            }
            s = temp;
        }
        return s[n];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

