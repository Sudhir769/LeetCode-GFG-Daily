#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        unordered_map<char, int>mp;
        
        for(auto i:s){
            mp[tolower(i)]++;
        }
        for(char c = 'a'; c <= 'z'; c++){
            if(mp.find(c) == mp.end()){
                return 0;
            }
        }
        return 1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

