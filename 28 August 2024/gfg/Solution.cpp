#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool cmp(pair<int, int> a, pair<int, int> b)
    {
        if (a.second != b.second)
        {
            return a.second > b.second;
        }
        else
        {
            return a.first < b.first;
        }
    }

    vector<int> sortByFreq(vector<int> &arr)
    {
        map<int, int> mpp;
        for (int i = 0; i < arr.size(); i++)
        {
            mpp[arr[i]]++;
        }

        vector<pair<int, int>> pp;
        for (auto it : mpp)
        {
            pair<int, int> p = make_pair(it.first, it.second);
            pp.push_back(p);
        }
        sort(pp.begin(), pp.end(), cmp);
        vector<int> ans;
        for (auto it : pp)
        {
            for (int i = 0; i < it.second; i++)
            {
                ans.push_back(it.first);
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

