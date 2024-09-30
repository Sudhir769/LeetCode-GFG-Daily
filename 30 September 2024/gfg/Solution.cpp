#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *left, *right;
        Node(int val) {
                data = val;
                left = right = NULL;
        }
};

class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    
    void dfs(Node* root, vector<int>& v){
        if(root){
            dfs(root->left, v);
            v.push_back(root->data);
            dfs(root->right, v);
        }
    }
    
    vector<int> merge(Node *root1, Node *root2) {
        vector<int> v1, v2; 
        dfs(root1, v1);
        dfs(root2, v2);
        
        vector<int> ans;
        int i=0, j=0;
        while(i < v1.size() and j < v2.size()){
            if(v1[i] <= v2[j]){
                ans.push_back(v1[i++]);
            }else{
                ans.push_back(v2[j++]);
            }
        }
        
        while(i < v1.size()){
            ans.push_back(v1[i++]);
        }
        while(j < v2.size()){
            ans.push_back(v2[j++]);
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

