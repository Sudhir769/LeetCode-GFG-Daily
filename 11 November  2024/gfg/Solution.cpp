#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minIncrements(vector<int> &arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_set<int> st;
        int sum = 0, maxi = 0;

        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, arr[i]);
            if (st.count(arr[i]))
            {
                sum += maxi - arr[i] + 1;
                maxi++;
                st.insert(maxi);
            }
            else
            {
                st.insert(arr[i]);
            }
        }
        return sum;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

