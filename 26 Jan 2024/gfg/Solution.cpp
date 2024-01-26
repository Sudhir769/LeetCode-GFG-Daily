#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution
{
    public:
    double fractionalKnapsack(int w, Item arr[], int n){
        pair<double, int> frac[n];
        for(int i=0; i<n; i++){
            frac[i] = {(double(arr[i].value)/arr[i].weight), i};
        }
        sort(frac, frac + n, greater<pair<double, int>>());
        double ans = 0;
        
        for(int i=0; i<n; i++){
            if(w >= arr[frac[i].second].weight){
                ans += arr[frac[i].second].value;
                w -= arr[frac[i].second].weight;   
            }else if(w < arr[frac[i].second].weight){
                ans += w*(double(arr[frac[i].second].value)/arr[frac[i].second].weight);
                break;
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

