#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minSteps(string s, string t) {
        int freq[26] = {0};

        for(auto i:s){
            freq[i-'a']++;
        }
        for(auto j:t){
            freq[j-'a']--;
        }
        int result = 0;
        for(int i=0; i<26; i++){
            if(freq[i] > 0){
                result += freq[i];
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
