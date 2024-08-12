#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size();
        
        vector<int> merged(2*n);
        int i=0, j=0, k=0;
        for( ;i<n and j<n; ){
            if(arr1[i] <= arr2[j]){
                merged[k++] = arr1[i++]; 
            }else{
                merged[k++] = arr2[j++];
            }
        }
        
        while(i<n){
            merged[k++] = arr1[i++];
        }
        
        while(j<n){
            merged[k++] = arr2[j++];
        }
        
        int mid = n-1;
        return merged[mid] + merged[mid+1];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

