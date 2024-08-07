#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthElement(int k, vector<int> &arr1, vector<int> &arr2)
    {
        int n = arr1.size(), m = arr2.size();

        int i = 0, j = 0;

        while (i < n and j < m)
        {

            if (arr1[i] <= arr2[j])
            {
                k--;
                if (k == 0)
                {
                    return arr1[i];
                }
                i++;
            }
            else
            {
                k--;
                if (k == 0)
                {
                    return arr2[j];
                }
                j++;
            }
        }
        while (i < n)
        {
            k--;
            if (k == 0)
            {
                return arr1[i];
            }
            i++;
        }
        while (j < m)
        {
            k--;
            if (k == 0)
            {
                return arr2[j];
            }
            j++;
        }
        return -1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

