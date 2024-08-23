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

vector<int> leftView(Node *root)
{
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int n = q.size();
        while(n--){
            Node* node = q.front();
            q.pop();
            
            if(n == 0) ans.push_back(node->data);
            
            if(node->right) q.push(node->right);
            if(node->left) q.push(node->left);
        }
    }
    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

