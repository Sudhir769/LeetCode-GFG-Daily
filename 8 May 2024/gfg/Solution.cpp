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

class Solution
{
public:
    vector<vector<int>> ans;
    void bfs(Node *root, vector<int> temp)
    {
        if (root == NULL)
        {
            return;
        }
        temp.push_back(root->data);

        if (root->left == NULL and root->right == NULL)
        {
            ans.push_back(temp);
            return;
        }

        bfs(root->left, temp);
        temp.pop_back();

        temp.push_back(root->data);
        bfs(root->right, temp);
    }
    vector<vector<int>> Paths(Node *root)
    {
        vector<int> temp;
        bfs(root, temp);
        return ans;
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
