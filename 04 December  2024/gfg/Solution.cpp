#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2)
    {
        int n = s1.length();

        s1 = s1 + s1;
        if (s1.find(s2) != string::npos)
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

