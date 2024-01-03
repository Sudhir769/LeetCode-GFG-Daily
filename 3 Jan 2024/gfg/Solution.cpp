#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int smallestSubstring(string s) {
        int i = 0, j = 0;
        int count[3] = {0};
        int ans = INT_MAX;
        
        while(j < s.size()){
            count[s[j] - '0']++;
            while(count[0] >= 1 and count[1] >= 1 and count[2] >= 1){
                int len = j-i+1;
                ans = min(ans, len);
                count[s[i] - '0']--;
                i++;
            }
            j++;
        }
        return ans==INT_MAX ? -1 : ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

