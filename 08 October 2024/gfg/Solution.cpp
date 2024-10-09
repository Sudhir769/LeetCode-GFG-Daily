#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pairsum(vector<int> &arr)
    {
        // code here
        int largest = INT_MIN, sLargest = INT_MIN;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > largest)
            {
                sLargest = largest;
                largest = arr[i];
            }
            else if (largest != arr[i] && arr[i] > sLargest)
            {
                sLargest = arr[i];
            }
        }

        return largest + sLargest;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

