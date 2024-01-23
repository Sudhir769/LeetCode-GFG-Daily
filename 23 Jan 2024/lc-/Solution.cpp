#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isduplicate(string &s1, string &s2){
        int alpha[26] = {0};

        for(auto i: s2){
            alpha[i-'a']++;
        }
        for(auto i:s1){
            if(alpha[i-'a'] > 0){
                return true;
            }
            alpha[i-'a']++;
        }
        return false;
    }

    int solve(int ind, string temp, vector<string>&arr, int n){
        if(ind >= n) return temp.size();

        int notTake = 0, take = 0;

        if(isduplicate(arr[ind], temp)){
            notTake = solve(ind+1, temp, arr, n);
        }else{
            notTake = solve(ind+1, temp, arr, n);
            take = solve(ind+1, temp+arr[ind], arr, n);
        }
        return max(take, notTake);
    }
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        return solve(0, "", arr, n);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
