#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool check(ListNode *head, TreeNode *root)
    {
        if (head == NULL)
            return true;
        if (root == NULL)
            return false;

        if (root->val != head->val)
        {
            return false;
        }

        return check(head->next, root->left) or check(head->next, root->right);
    }
    bool isSubPath(ListNode *head, TreeNode *root)
    {
        if (root == NULL)
            return false;

        return check(head, root) or isSubPath(head, root->left) or isSubPath(head, root->right);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
