#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int timeNeeded = 0;
        for (int i = 0; i < tickets.size(); i++)
        {
            if (i <= k)
                timeNeeded += min(tickets[k], tickets[i]);
            else
                timeNeeded += min(tickets[k] - 1, tickets[i]);
        }
        return timeNeeded;
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
