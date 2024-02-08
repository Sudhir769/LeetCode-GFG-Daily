#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

class Solution
{
public:
    unordered_set<int> st;
    void solve(Node *root, int level)
    {
        if (root == NULL)
            return;

        if (root->left == NULL and root->right == NULL)
        {
            st.insert(level);
        }

        solve(root->left, level + 1);
        solve(root->right, level + 1);
    }
    bool check(Node *root)
    {
        solve(root, 0);
        return st.size() == 1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

