#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(int d)
    {
        int sum = 0, steps = 0;
        while (sum < d)
        {
            sum += steps;
            steps++;
        }
        while ((sum - d) % 2 == 1)
        {
            sum += steps;
            steps++;
        }
        return steps - 1;
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
