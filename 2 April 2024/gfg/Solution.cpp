#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

class Solution
{
public:
    int ans = INT_MAX;
    Node *prev = NULL;

    void solve(Node *root)
    {
        if (root == NULL)
        {
            return;
        }

        solve(root->left);
        if (prev != NULL)
        {
            ans = min(ans, abs(root->data - prev->data));
        }
        prev = root;
        solve(root->right);
    }

    int absolute_diff(Node *root)
    {
        solve(root);
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
