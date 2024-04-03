#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

class Solution
{
public:
    int ans = -1;
    int flag = 0;

    Node *lowest(Node *root, int x, int y)
    {
        if (root == NULL)
            return NULL;

        if (root->data == x)
            return root;
        if (root->data == y)
            return root;

        Node *leftAns = lowest(root->left, x, y);
        Node *rightAns = lowest(root->right, x, y);

        if (leftAns == NULL and rightAns == NULL)
            return NULL;
        else if (leftAns != NULL and rightAns == NULL)
            return leftAns;
        else if (leftAns == NULL and rightAns != NULL)
            return rightAns;
        else
            return root;
    }

    bool solve(Node *root, Node *lca, int &k)
    {
        if (root == NULL)
            return false;

        if (root->data == lca->data)
        {
            flag = true;
            k--;
            if (k == 0)
            {
                ans = root->data;
                flag = false;
            }
            return 1;
        }

        int l = solve(root->left, lca, k);
        if (l)
        {
            if (flag)
            {
                k--;
                if (k == 0)
                {
                    ans = root->data;
                    flag = false;
                }
            }
            return l;
        }

        int r = solve(root->right, lca, k);
        if (r)
        {
            if (flag)
            {
                k--;
                if (k == 0)
                {
                    ans = root->data;
                    flag = false;
                }
            }
            return r;
        }
    }

    int kthCommonAncestor(Node *root, int k, int x, int y)
    {
        Node *lca = lowest(root, x, y);
        solve(root, lca, k);

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
