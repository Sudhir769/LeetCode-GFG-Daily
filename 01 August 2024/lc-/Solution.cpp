#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;

        for(auto str:details){
            int age = stoi(str.substr(11, 2));
            if(age > 60) cnt++;
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
