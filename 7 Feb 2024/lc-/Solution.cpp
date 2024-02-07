#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        vector<pair<char, int>> mp(123);

        for (auto i : s)
        {
            int freq = mp[i].second;
            mp[i] = {i, freq + 1};
        }

        auto comp = [&](auto &p1, auto &p2)
        {
            return p1.second > p2.second;
        };

        sort(mp.begin(), mp.end(), comp);
        string result = "";
        for (int i = 0; i < 123; i++)
        {
            if (mp[i].second > 0)
            {
                char ch = mp[i].first;
                int freq = mp[i].second;
                string temp = string(freq, ch);
                result += temp;
            }
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
