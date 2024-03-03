#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string printLargest(int n, vector<string> &arr)
    {
        sort(arr.begin(), arr.end(), [](string &a, string &b)
            { return a + b > b + a; });
        string ans = "";
        for (auto it : arr)
        {
            ans += it;
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

