#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lps(string str)
    {
        int n = str.size();
        vector<int> kmp(n);

        int i = 0;
        for (int j = 1; j < n; j++)
        {
            if (str[i] == str[j])
            {
                kmp[j] = ++i;
            }
            else
            {
                while ((--i) >= 0)
                {
                    i = kmp[i];
                    if (str[i] == str[j])
                        break;
                }
                kmp[j] = ++i;
            }
        }
        return kmp[n - 1];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

