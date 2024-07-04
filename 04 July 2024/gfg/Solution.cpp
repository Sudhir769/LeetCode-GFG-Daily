#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    unordered_map<string, int>mp;
    vector<Node*> res;
    
    string DFS(Node* root){
        if(!root) return "N";
        
        string str = DFS(root->left) + "" + DFS(root->right) + to_string(root->data);
        mp[str]++;
        if(mp[str] == 2) res.push_back(root);
        
        return str;
    }
    
    vector<Node*> printAllDups(Node* root) {
        DFS(root);
        return res;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

