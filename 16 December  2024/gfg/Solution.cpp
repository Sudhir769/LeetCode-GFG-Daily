#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        int n = a.size();
        int m = b.size();
        
        int i=0, j=0;
        int result = 0;
        while(i < n and j < m){
            k--;
            
            if(a[i] < b[j]){
                result = a[i];
                if(k == 0) return result;
                i++;
            }else{
                result = b[j];
                if(k == 0) return result;
                j++;
            }
        }
        
        while(i < n){
            k--;
            result = a[i];
            if(k == 0) return result;
            i++;
        }
        
        while(j < m){
            k--;
            result = b[j];
            if(k == 0) return result;
            j++;
        }
        
        return -1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

