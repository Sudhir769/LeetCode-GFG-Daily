#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findClosest(int n, int k, int arr[])
    {
        int ind = lower_bound(arr, arr + n, k) - arr;
        return (abs(arr[ind - 1] - k) < (abs(arr[ind] - k))) ? arr[ind - 1] : arr[ind];
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

