#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

int minValue(struct Node *root)
{
    while (root->left)
        root = root->left;
    return root->data;
}

int minValue(struct Node *root)
{
    while (root->left)
        root = root->left;
    return root->data;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
