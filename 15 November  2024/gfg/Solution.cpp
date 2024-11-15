#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        int n = arr.size();

        int largest = arr[0];
        int secondLargest = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                secondLargest = largest;
                largest = arr[i];
            }
            else if (arr[i] > secondLargest and arr[i] != largest)
            {
                secondLargest = arr[i];
            }
        }
        if (secondLargest == INT_MIN)
            return -1;
        return secondLargest;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

