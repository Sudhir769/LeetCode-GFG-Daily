#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n, 0);

        int i = 0, j = n-1, e = n-1;
        while(i <= j){
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];

            if(a > b){
                ans[e--] = a;
                i++;
            }else{
                ans[e--] = b;
                j--;
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
