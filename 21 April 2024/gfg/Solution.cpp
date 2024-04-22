#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    void threeWayPartition(vector<int> &array, int a, int b)
    {
        int n = array.size();
        int i = 0, j = n - 1, idx = 0;

        while (idx <= j)
        {
            if (array[idx] < a)
            {
                swap(array[idx], array[i]);
                i++, idx++;
            }
            else if (array[idx] > b)
            {
                swap(array[idx], array[j]);
                j--;
            }
            else
            {
                idx++;
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

