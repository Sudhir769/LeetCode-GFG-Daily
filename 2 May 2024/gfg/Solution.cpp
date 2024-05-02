#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

class Solution {
public:
    vector<int> ans;
    void bfs1(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        bfs1(root->left);
        ans.push_back(root->data);
        bfs1(root->right);
    }
    vector<int> serialize(Node *root)
    {
        bfs1(root);
        return ans;
    }

    // Function to deserialize a list and construct the tree.

    // Node* bfs(start, end, vector<int>&a){
    //     if(start > end){
    //         return NULL;
    //     }

    //     int mid = (start + end)/2;
    //     Node* root = new Node(a[mid]);

    //     root->left = bfs(start, mid-1, a);
    //     root->right = bfs(mid+1, end, a);
    //     return root;
    // }

    // void bf(Node* root){
    //     if(root){
    //         bf(root->left);
    //         cout<<root->data<<" ";
    //         bf(root->right);
    //     }
    // }
    Node *deSerialize(vector<int> &A)
    {
        Node *root = new Node(A.back());
        Node *temp = root;
        int n = A.size();
        for (int i = n - 2; i >= 0; i--)
        {
            Node *node = new Node(A[i]);
            temp->left = node;
            temp = node;
        }
        return root;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

