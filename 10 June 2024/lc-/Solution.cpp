#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> expected(heights.begin(), heights.end());
        sort(expected.begin(), expected.end());

        int cnt = 0;
        for (int i = 0; i < expected.size(); i++)
        {
            if (heights[i] != expected[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
