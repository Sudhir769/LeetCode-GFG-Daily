#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k)
    {
        int n = arr.size();
        priority_queue<int> pq;

        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

