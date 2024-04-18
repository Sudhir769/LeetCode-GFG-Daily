#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> twoRepeated(int arr[], int n)
    {
        vector<int> ans;
        for (int i = 0; i < n + 2; i++)
        {
            int x = abs(arr[i]) - 1;
            if (arr[x] > 0)
            {
                arr[x] = -arr[x];
            }
            else
            {
                ans.push_back(x + 1);
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

