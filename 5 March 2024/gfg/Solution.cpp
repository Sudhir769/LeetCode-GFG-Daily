#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxIndexDiff(int a[], int n)
    {
        // int i=0;
        // int j=n-1;
        // int maxi = 0;

        // while(i<=j){
        //     if(a[i] > a[j]){
        //         j--;
        //     }else{
        //         maxi = max(maxi, j-i);
        //         i++;
        //         j=n-1;
        //     }
        // }
        // return maxi;

        int leftMin[n], rightMax[n];

        // Fill leftMin array
        leftMin[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            leftMin[i] = min(leftMin[i - 1], a[i]);
        }

        // Fill rightMax array
        rightMax[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            rightMax[i] = max(rightMax[i + 1], a[i]);
        }

        // Find maximum difference
        int i = 0, j = 0, maxDiff = -1;
        while (i < n && j < n)
        {
            if (leftMin[i] <= rightMax[j])
            {
                maxDiff = max(maxDiff, j - i);
                j++;
            }
            else
            {
                i++;
            }
        }

        return maxDiff;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

