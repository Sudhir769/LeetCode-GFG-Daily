#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution {
public:
    Node *createTree(vector<int> parent)
    {
        int n = parent.size();
        unordered_map<int, Node *> mp;

        Node *root;
        for (int i = 0; i < n; i++)
        {
            if (parent[i] == -1)
            {
                if (!mp.count(i))
                {
                    mp[i] = new Node(i);
                }
                root = mp[i];
            }
            else
            {
                if (!mp.count(i))
                {
                    mp[i] = new Node(i);
                }
                if (!mp.count(parent[i]))
                {
                    mp[parent[i]] = new Node(parent[i]);
                }
                if (mp[parent[i]]->left == NULL)
                {
                    mp[parent[i]]->left = mp[i];
                }
                else
                {
                    mp[parent[i]]->right = mp[i];
                }
            }
        }
        return root;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

