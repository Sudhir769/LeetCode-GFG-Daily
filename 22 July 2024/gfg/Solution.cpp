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
    bool isBST(Node *head, int low, int high)
    {
        if (head == NULL)
        {
            return true;
        }
        if (head->data <= low or head->data >= high)
        {
            return false;
        }
        return isBST(head->left, low, head->data) and isBST(head->right, head->data, high);
    }

    int getSize(Node *root)
    {
        if (root == NULL)
            return 0;

        return 1 + getSize(root->left) + getSize(root->right);
    }

    int largestBst(Node *root)
    {
        queue<Node *> q;
        int ans = 0;
        q.push(root);

        while (!q.empty())
        {
            Node *head = q.front();
            q.pop();

            if (isBST(head, INT_MIN, INT_MAX))
            {
                ans = max(ans, getSize(head));
            }
            if (head->left)
                q.push(head->left);
            if (head->right)
                q.push(head->right);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

