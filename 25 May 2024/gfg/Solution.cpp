#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long max_Books(int arr[], int n, int k)
    {
        long long maxBooks = 0;
        long long currentBooks = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                currentBooks += arr[i];
                maxBooks = max(maxBooks, currentBooks);
            }
            else
            {
                currentBooks = 0;
            }
        }
        return maxBooks;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

