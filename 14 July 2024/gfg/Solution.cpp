#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void segregate0and1(vector<int> &arr)
    {
        int n = arr.size();

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

