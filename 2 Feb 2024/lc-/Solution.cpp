#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q;
        for(int i=1; i<=9; i++){
            q.push(i);
        }

        vector<int>ans;
        while(!q.empty()){
            int digit = q.front();
            q.pop();

            if(digit >= low and digit <= high){
                ans.push_back(digit);
            }

            int lastDigit = digit % 10;
            if(lastDigit + 1 <= 9){
                q.push(digit * 10 + (lastDigit+1));
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
