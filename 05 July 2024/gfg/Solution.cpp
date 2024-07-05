#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int verticalWidth(Node *root)
    {

        if (root == NULL)
        {
            return 0;
        }

        queue<pair<Node *, int>> q;
        q.push({root, 0});

        int LEFT = 0, RIGHT = 0;
        while (!q.empty())
        {
            int n = q.size();

            while (n--)
            {
                Node *node = q.front().first;
                int left = q.front().second;
                q.pop();

                if (node->left)
                {
                    q.push({node->left, left - 1});
                    LEFT = min(LEFT, left - 1);
                }

                if (node->right)
                {
                    q.push({node->right, left + 1});
                    RIGHT = max(RIGHT, left + 1);
                }
            }
        }
        return RIGHT - LEFT + 1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

