#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findSingle(int n, int arr[])
    {
        int x = arr[0];
        for (int i = 1; i < n; i++)
        {
            x = x ^ arr[i];
        }
        return x;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
