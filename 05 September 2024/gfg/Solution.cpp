#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int> &arr)
    {

        int sum = (n * (n + 1)) / 2;
        for (auto it : arr)
        {
            sum -= it;
        }
        return sum;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

