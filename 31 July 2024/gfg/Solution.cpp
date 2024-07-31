#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string longestCommonPrefix(vector<string> arr)
    {
        if (arr.empty())
        {
            return "-1";
        }

        string common_prefix = arr[0];

        for (int i = 1; i < arr.size(); ++i)
        {
            int j = 0;
            while (j < common_prefix.size() && j < arr[i].size() && common_prefix[j] == arr[i][j])
            {
                ++j;
            }
            common_prefix = common_prefix.substr(0, j);

            if (common_prefix.empty())
            {
                return "-1";
            }
        }

        return common_prefix;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

