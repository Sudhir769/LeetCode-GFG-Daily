#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

class Solution
{
public:
    pair<bool, int> isSumTreeFast(Node *root)
    {
        if (root == NULL)
        {
            return {true, 0};
        }
        if (root->right == NULL && root->left == NULL)
        {
            return {true, root->data};
        }

        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);

        bool left = leftAns.first;
        bool right = rightAns.first;

        bool cond = root->data == leftAns.second + rightAns.second;

        pair<bool, int> ans;
        if (left && right && cond)
        {
            ans.first = true;
            ans.second = 2 * root->data;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }

    bool isSumTree(Node *root)
    {
        isSumTreeFast(root).first;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

