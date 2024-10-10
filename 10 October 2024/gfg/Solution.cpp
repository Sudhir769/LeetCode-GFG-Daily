#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDistance(vector<int> &arr)
    {
        unordered_map<int, int> first;
        unordered_map<int, int> last;

        for (int i = 0; i < arr.size(); i++)
        {

            if (first.find(arr[i]) != first.end())
            {
                continue;
            }
            first[arr[i]] = i;
        }

        for (int i = 0; i < arr.size(); i++)
        {
            last[arr[i]] = i;
        }

        int ans = 0;
        for (auto it : first)
        {
            ans = max(ans, last[it.first] - it.second);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

