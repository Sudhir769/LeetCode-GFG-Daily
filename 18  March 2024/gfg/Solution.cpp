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
        left = right = NULL;
    }
};

class Solution {
public:
    vector<int> levelOrder(Node *root)
    {
        vector<int> ans;
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            int n = q.size();

            while (n--)
            {
                Node *node = q.front();
                q.pop();

                ans.push_back(node->data);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
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

