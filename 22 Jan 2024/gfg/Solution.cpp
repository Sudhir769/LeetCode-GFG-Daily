#include <bits/stdc++.h>
using namespace std;


struct Node
{
	int key;
	Node *left, *right;
};

class Solution
{
    public:
    vector<vector<int>> printPaths(Node *root, int sum)
    {   
        vector<vector<int>>ans;
        vector<int>temp;
        
        function<void(Node* , int)> dfs = [&](Node* root, int curr){
            if(!root){
                return;
            }
            
            curr += root->key;
            temp.push_back(root->key);
        
            if(sum == curr) {
                ans.push_back(temp);
            }
            
            dfs(root->left, curr);
            dfs(root->right, curr);
            
            curr -= root->key;
            temp.pop_back();  
        };
        
        dfs(root, 0);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

