#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pushZerosToEnd(vector<int> &arr)
    {
        int n = arr.size();

        int i = 0;
        while (i < n and arr[i] != 0)
        {
            i++;
        }
        int j = i + 1;
        for (; j < n; j++)
        {
            if (arr[i] == 0 and arr[j] != 0)
            {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        return;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

