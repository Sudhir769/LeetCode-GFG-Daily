#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

class Solution {
public:
    vector<int> verticalSum(Node *root)
    {
        queue<pair<Node *, int>> q;
        q.push({root, 0});
        map<int, int> mp; //{dist, sum}

        while (!q.empty())
        {
            auto it = q.front();
            q.pop();

            Node *node = it.first;
            int dist = it.second;

            mp[dist] += node->data;

            if (node->left)
                q.push({node->left, dist - 1});
            if (node->right)
                q.push({node->right, dist + 1});
        }
        vector<int> ans;
        for (auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

