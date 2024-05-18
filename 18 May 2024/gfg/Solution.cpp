#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findPeakElement(vector<int> &a)
    {
        int n = a.size();
        int start = 0, end = n - 1;
        int result = 0;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (a[mid] > a[mid - 1])
            {
                result = a[mid];
                start = mid + 1;
            }
            else if (a[mid] < a[mid - 1])
            {
                end = mid - 1;
            }
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

