#include <bits/stdc++.h>
using namespace std;

class Job
{
public:
    int id;
    int dead;
    int profit;
};

class Solution
{
public:
    // Function to find the maximum profit and the number of jobs done.
    bool static comp(Job &a, Job &b)
    {
        return a.profit > b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n)
    {
        int cnt = 0;
        sort(arr, arr + n, comp);

        int maxi = arr[0].dead;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, arr[i].dead);
        }

        vector<int> slot(maxi + 1, -1);

        int cntJobs = 0, jobProfit = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = arr[i].dead; j > 0; j--)
            {
                if (slot[j] == -1)
                {
                    slot[j] = i;
                    cntJobs++;
                    jobProfit += arr[i].profit;
                    break;
                }
            }
        }
        return {cntJobs, jobProfit};
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

