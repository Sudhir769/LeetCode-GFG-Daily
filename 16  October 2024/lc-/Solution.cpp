#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestDiverseString(int a, int b, int c)
    {
        string result = "";
        priority_queue<pair<int, char>> pq;

        if (a > 0)
            pq.push({a, 'a'});
        if (b > 0)
            pq.push({b, 'b'});
        if (c > 0)
            pq.push({c, 'c'});

        while (!pq.empty())
        {
            int cnt1 = pq.top().first;
            char char1 = pq.top().second;
            pq.pop();

            if (result.size() >= 2 and result.back() == char1 and result[result.length() - 2] == char1)
            {
                if (pq.empty())
                    break;

                int cnt2 = pq.top().first;
                char char2 = pq.top().second;
                pq.pop();

                result += char2;
                cnt2--;

                if (cnt2 > 0)
                    pq.push({cnt2, char2});

                pq.push({cnt1, char1});
            }
            else
            {
                result += char1;
                cnt1--;

                if (cnt1 > 0)
                    pq.push({cnt1, char1});
            }
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
