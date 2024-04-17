#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int bsearch(int arr[], int x, int y, int k)
    {
        int high = y - 1;
        int low = x;
        int mid = (low + high) / 2;

        while (low < high)
        {
            // cout<<"Mid = "<<mid<<endl;
            if (arr[mid] < k && arr[mid + 1] >= k)
            {
                break;
            }
            else if (arr[mid] < k && arr[mid + 1] < k)
            {
                low = mid + 1;
                mid = (low + high) / 2;
            }
            else
            {
                high = mid - 1;
                mid = (low + high) / 2;
            }
            // cout<<"Mid = "<<mid<<endl;
        }

        return mid + 1 - x;
    }
    int countPairs(int arr[], int n)
    {
        // Your code goes here
        int i;

        for (i = 0; i < n; i++)
        {
            arr[i] = i * arr[i];
            // cout<<arr[i]<<endl;
        }

        i = n - 2;
        int sum = 0;
        int temp;
        int j;

        while (i >= 0)
        {
            if (arr[i] > arr[i + 1])
            {
                sum = sum + bsearch(arr, i + 1, n, arr[i]);
                // cout<<i<<endl;
                // cout<<sum<<endl;
            }

            j = i;

            while ((j < n - 1) && (arr[j] > arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                j++;
            }

            i--;
        }

        return sum;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

