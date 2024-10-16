#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkSorted(vector<int> &arr)
    {
        int n = arr.size();

        int cnt = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            while (arr[i] != i + 1)
            {
                flag = false;
                swap(arr[i], arr[arr[i] - 1]);
                cnt++;
            }
        }
        if (flag)
            return true;
        return cnt == 2;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

