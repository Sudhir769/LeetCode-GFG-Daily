#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long> &arr)
    {
        int n = arr.size();

        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }
        long long cost = 0;
        while (pq.size() > 1)
        {
            auto first = pq.top();
            pq.pop();
            auto second = pq.top();
            pq.pop();

            cost += first + second;
            pq.push(first + second);
        }
        return cost;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

