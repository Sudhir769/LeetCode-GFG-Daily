#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};


class Solution
{
public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        queue<Node *> q;
        q.push(root);
        bool leftToRight = true;
        while (!q.empty())
        {
            int n = q.size();
            vector<int> temp(n);

            for (int i = 0; i < n; i++)
            {
                auto node = q.front();
                q.pop();

                if (leftToRight)
                {
                    temp[i] = node->data;
                }
                else
                {
                    temp[n - i - 1] = node->data;
                }

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            leftToRight = !leftToRight;
            for (auto it : temp)
            {
                ans.push_back(it);
            }
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

