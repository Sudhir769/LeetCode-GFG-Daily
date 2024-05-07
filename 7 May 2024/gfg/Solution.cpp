#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
vector<int> reverseLevelOrder(Node *root)
{
    queue<Node *> q;
    vector<int> ans;
    q.push(root);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        ans.push_back(node->data);
        if (node->right)
            q.push(node->right);
        if (node->left)
            q.push(node->left);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

