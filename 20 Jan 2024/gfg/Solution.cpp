#include <bits/stdc++.h>
using namespace std;




struct Node {
	int key;
	Node *left, *right;
};


class Solution
{
    public:
    int distributeCandy(Node* root)
    {
        map<Node*, int> subtree, candies;
        int ans=0;
        
        function<void(Node*)> dfs1 = [&](Node* node){
            if(!node) return;
            
            subtree[node] = 1;
            candies[node] = node->key;
            
            dfs1(node->left);
            dfs1(node->right);
            
            subtree[node] += subtree[node->left] + subtree[node->right];
            candies[node] += candies[node->left] + candies[node->right];
        };
        dfs1(root);
        
        function<void(Node*)> dfs2 = [&](Node* node){
            if(!node) return;
            
            int leftExtra = candies[node->left] - subtree[node->left];
            int rightExtra = candies[node->right] - subtree[node->right];
            
            ans += abs(leftExtra) + abs(rightExtra);
            
            dfs2(node->left);
            dfs2(node->right);
        };
        dfs2(root);
        
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

