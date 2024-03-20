#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int sumOfLongRootToLeafPath(Node *root)
    {
        queue<pair<Node *, pair<int, int>>> q; //{node, {level, sum}}
        q.push({root, {0, root->data}});
        int maxi = 0;
        int maxL = 0;
        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            Node *node = it.first;
            int level = it.second.first;
            int sum = it.second.second;
            maxi = max(maxi, sum);
            if (level > maxL)
            {
                maxL = level;
                maxi = sum;
            }

            if (node->left)
                q.push({node->left, {level + 1, sum + node->left->data}});
            if (node->right)
                q.push({node->right, {level + 1, sum + node->right->data}});
        }
        return maxi;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

