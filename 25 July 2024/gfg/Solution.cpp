#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

Node* solve(int start, int end, vector<int>& nums){
        if(start > end){
            return NULL;
        }
        
        int mid = start + (end - start)/2;
        
        Node* root = new Node(nums[mid]);
        
        root->left = solve(start, mid-1, nums);
        root->right = solve(mid+1, end, nums);
        
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        
        Node* root =  solve(0, nums.size()-1, nums);
        // inorder(root);
        return root;
    }

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

