#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for(int i=1; i<s.length(); i++){
            score += abs(s[i] - s[i-1]);
        }
        return score;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
