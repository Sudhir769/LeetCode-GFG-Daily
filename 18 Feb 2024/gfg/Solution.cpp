#include <bits/stdc++.h>
using namespace std;



class Solution
{
    public:
        /*You are required to complete below method */
        int ans = 0;
        void solve(Node* root){
            if(root==NULL) return;
            
            solve(root->left);
            if(root->left == NULL and root->right==NULL){
                ans +=  root->data;
            }
            solve(root->right);
        }
        int sumOfLeafNodes(Node *root ){
            solve(root);
            return ans;
        }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

