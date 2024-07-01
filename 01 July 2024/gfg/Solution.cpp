#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
// The structure of TreeNode is as follows 
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    void convert(Node *head, TreeNode *&root)
    {

        if (head == NULL)
        {
            root = NULL;
            return;
        }

        queue<TreeNode *> q;
        root = new TreeNode(head->data);

        head = head->next;
        q.push(root);

        while (head)
        {
            TreeNode *curr = q.front();
            q.pop();

            curr->left = new TreeNode(head->data);
            q.push(curr->left);
            head = head->next;

            if (head == NULL)
                return;

            curr->right = new TreeNode(head->data);
            q.push(curr->right);

            head = head->next;
        }
        return;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

