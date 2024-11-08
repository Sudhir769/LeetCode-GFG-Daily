#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minRepeats(string &s1, string &s2)
    {
        string temp = s1;

        int cnt = 1;
        while (s1.length() < s2.length())
        {
            s1 += temp;
            cnt++;
        }
        if (s1.find(s2) != string::npos)
            return cnt;
        s1 += temp, cnt++;

        if (s1.find(s2) != string::npos)
            return cnt;
        return -1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

