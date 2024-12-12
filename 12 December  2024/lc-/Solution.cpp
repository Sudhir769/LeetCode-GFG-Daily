#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {
        long long result = 0;
        priority_queue<int> pq;

        for (auto gift : gifts)
        {
            pq.push(gift);
        }

        for (int i = 0; i < k; i++)
        {
            int gift = pq.top();
            pq.pop();

            int root = floor(sqrt(gift));
            pq.push(root);
        }

        while (!pq.empty())
        {
            result += pq.top();
            pq.pop();
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
