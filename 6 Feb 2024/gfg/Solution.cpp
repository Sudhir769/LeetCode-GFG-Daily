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
    // Function to return count of nodes at a given distance from leaf nodes.
    int printKDistantfromLeaf(Node *node, int k)
    {
        set<Node *> st;
        vector<Node *> temp;

        function<void(Node *)> dfs = [&](Node *root)
        {
            if (!root)
            {
                return;
            }

            temp.push_back(root);

            if (!root->left and !root->right)
            {
                int ind = temp.size() - k - 1;
                if (ind >= 0)
                    st.insert(temp[ind]);
            }

            dfs(root->left);
            dfs(root->right);

            temp.pop_back();
        };

        dfs(node);
        return st.size();
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
