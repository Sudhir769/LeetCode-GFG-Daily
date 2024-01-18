#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int min_sprinklers(int gallery[], int n)
    {
        vector<pair<int, int>> vec;
        for(int i=0; i<n; i++){
            if(gallery[i]==-1) continue;
            
            int left = max(0, i-gallery[i]);
            int right = min(n-1, i+gallery[i]);
            
            vec.push_back({left, right});
        }
        
        sort(vec.begin(), vec.end());
        int tap = 0;
        int target = 0;
        int i=0;
        
        while(target < n){
            int maxRightIndex = -1;
            
            while(i < vec.size()){
                if(vec[i].first <= target){
                    maxRightIndex = max(maxRightIndex, vec[i].second);
                    i++;
                }else{
                    break;
                }
            }
            if(maxRightIndex < target){
                return -1;
            }
            tap++;
            target = maxRightIndex + 1;
        }
        return tap;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

