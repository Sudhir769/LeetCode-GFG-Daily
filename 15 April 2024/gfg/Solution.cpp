#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n,
                              vector<int> &query, int q)
    {

        // vector<int>ans;
        // int k=0;
        // while(k < q){
        //     int x = query[k];

        //     int el = a[x];
        //     int cnt=0;
        //     for(int i=0; i<n; i++){
        //         if(b[i] <= el){
        //             cnt++;
        //         }
        //     }
        //     ans.push_back(cnt);
        //     k++;
        // }
        // return ans;

        int maxEle = *max_element(a.begin(), a.end());
        vector<int> freq(maxEle + 1);

        for (int i = 0; i < n; i++)
        {
            if (b[i] <= maxEle)
                freq[b[i]]++;
        }

        for (int i = 1; i <= maxEle; i++)
            freq[i] += freq[i - 1];

        vector<int> ans;
        for (auto x : query)
            ans.push_back(freq[a[x]]);

        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

