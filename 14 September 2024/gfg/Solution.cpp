#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rearrange(vector<int> &arr)
    {
        int n = arr.size();

        vector<int> pos, neg;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
                pos.push_back(arr[i]);
            else
                neg.push_back(arr[i]);
        }
        int j = 0, k = 0, i = 0;
        for (; j < pos.size() and k < neg.size(); i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = pos[j++];
            }
            else
            {
                arr[i] = neg[k++];
            }
        }
        while (j < pos.size())
            arr[i++] = pos[j++];
        while (k < neg.size())
            arr[i++] = neg[k++];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

