#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    map<int, pair<int, int>> mp;
    void solve(Node *root, int index, int level)
    {
        if (!root)
            return;
        if (level >= mp[index].second)
            mp[index] = {root->data, level};
        solve(root->left, index - 1, level + 1);
        solve(root->right, index + 1, level + 1);
    }
    vector<int> bottomView(Node *root)
    {
        solve(root, 0, 0);
        vector<int> ans;
        for (auto it : mp)
            ans.push_back(it.second.first);
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

