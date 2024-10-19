#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string roundToNearest(string str)
    {
        int n = str.length();
        if (str[n - 1] <= '5')
        {
            str[n - 1] = '0';
            return str;
        }

        str[n - 1] = '0';
        int i = n - 2;
        while (i >= 0 and str[i] == '9')
        {
            str[i] = '0';
            i--;
        }
        if (i < 0)
        {
            str = '1' + str;
        }
        else
        {
            str[i]++;
        }
        return str;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

