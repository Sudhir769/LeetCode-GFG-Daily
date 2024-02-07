#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

class Solution
{
public:
    Node *findLCA(Node *root, int a, int b)
    {
        if (root == nullptr || root->data == a || root->data == b)
            return root;

        Node *left = findLCA(root->left, a, b);
        Node *right = findLCA(root->right, a, b);

        if (left && right)
            return root;

        return (left != nullptr) ? left : right;
    }

    int findDist(Node *root, int a, int b)
    {
        Node *lca = findLCA(root, a, b);

        function<int(Node *, int)> distanceToLCA = [&](Node *node, int target)
        {
            if (node == nullptr)
                return -1;
            if (node->data == target)
                return 0;

            int leftDistance = distanceToLCA(node->left, target);
            int rightDistance = distanceToLCA(node->right, target);

            if (leftDistance >= 0)
                return leftDistance + 1;
            if (rightDistance >= 0)
                return rightDistance + 1;

            return -1;
        };

        int distA = distanceToLCA(lca, a);
        int distB = distanceToLCA(lca, b);

        return distA + distB;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

