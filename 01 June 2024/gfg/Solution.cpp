#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string oddEven(string s)
    {
        unordered_map<int, int> freq;

        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i]]++;
        }
        int x = 0, y = 0;
        for (auto it : freq)
        {
            int a = (it.first - 'a') + 1;
            if (a % 2 == 0)
            {
                if (it.second % 2 == 0)
                {
                    x++;
                }
            }
            else
            {
                if (it.second % 2)
                {
                    y++;
                }
            }
        }
        return (x + y) % 2 ? "ODD" : "EVEN";
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

