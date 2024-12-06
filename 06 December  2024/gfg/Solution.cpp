#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> freq(n+1, 0);
        
        for(int i=0; i<n; i++){
            if(citations[i] >= n) freq[n]++;
            else freq[citations[i]]++;
        }
        
        int hIndex = n;
        int num = freq[n];
        while(num < hIndex){
            hIndex--;
            num += freq[hIndex];
        }
        return hIndex;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

