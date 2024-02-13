#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string& s, int i, int j){
        if(i > j){
            return true;
        }
        if(s[i] == s[j]){
            return isPalindrome(s, i+1, j-1);
        }
        return false;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i:words){
            if(isPalindrome(i, 0, i.length()-1)){
                return i;
            }
        }
        return "";
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
