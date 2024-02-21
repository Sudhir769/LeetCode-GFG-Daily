#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // int shiftCounter = 0;
        // while(left != right){
        //     left = (left >> 1);
        //     right = (right >> 1);
        //     shiftCounter++;
        // }
        // return (left << shiftCounter);

        while(right > left){
            right = right & (right-1);
        }
        return right;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
