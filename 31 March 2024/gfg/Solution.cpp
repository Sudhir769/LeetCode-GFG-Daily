#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

class Solution
{
public:
    int ans = 0;
    void solve(Node *root, int n)
    {
        if (root == NULL)
            return;

        if (root->key <= n)
        {
            ans = root->key;
            solve(root->right, n);
        }
        else
        {
            solve(root->left, n);
        }
    }

    int findMaxForN(Node *root, int n)
    {
        solve(root, n);
        return ans != 0 ? ans : -1;
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
