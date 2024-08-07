#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool possible(int force, vector<int>&position, int m){
        int prev = position[0];
        int countBalls = 1;
        for(int i=1; i<position.size(); i++){
            int curr = position[i];
            if(curr - prev >= force){
                countBalls++;
                prev = curr;
            }
            if(countBalls == m){
                break;
            }
        }
        return countBalls == m;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());

        int minForce = 1;
        int maxForce = position[n-1] - position[0];

        int result = 0;
        while(minForce <= maxForce){
            int mid = minForce + (maxForce - minForce)/2;

            if(possible(mid, position, m)){
                result = mid;
                minForce = mid+1;
            }else{
                maxForce = mid-1;
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
