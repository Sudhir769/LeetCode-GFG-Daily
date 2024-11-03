#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int n = s.length();
        int m = goal.length();

        s = s + s;

        if (m != n)
        {
            return false;
        }
        if (s.find(goal) != string::npos)
        {
            return true;
        }
        return false;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
