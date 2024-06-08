#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findExtra(int n, int arr1[], int arr2[])
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr1[i] != arr2[i])
            {
                return i;
            }
        }
        return n - 1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

