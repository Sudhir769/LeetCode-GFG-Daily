#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans;
        deque<int> dq;

        for (int i = 0; i < n; i++)
        {
            if (dq.size() and dq.front() == i - k)
                dq.pop_front();
            while (dq.size() and arr[i] >= arr[dq.back()])
                dq.pop_back();

            dq.push_back(i);
            if (i >= k - 1)
            {
                ans.push_back(arr[dq.front()]);
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

