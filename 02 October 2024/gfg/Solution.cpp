#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        deque<int> dq;
        int n = arr.size();
        
        for(auto num:arr){
            dq.push_back(num);
        }
        int k = 1;
        while(n > k){
            int num = dq.back();
            dq.pop_back();
            dq.push_front(num);
            dq.erase(dq.begin() + n - k);
            k++;
            n--;
        }
        return dq[0];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

