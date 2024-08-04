#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxMeetings(int n, int start[], int end[])
    {
        vector<pair<int, int>> meetings;

        for (int i = 0; i < n; i++)
        {
            meetings.push_back({end[i], start[i]});
        }

        sort(meetings.begin(), meetings.end());
        int cnt = 0;
        int endTime = -1;
        for (int i = 0; i < n; i++)
        {
            if (meetings[i].second > endTime)
            {
                cnt++;
                endTime = meetings[i].first;
            }
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

