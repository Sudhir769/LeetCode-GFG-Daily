#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p==NULL|| q==NULL) return p==q;
        if (p->val!=q->val) return 0;
        bool L=isSameTree(p->left, q->left);
        bool R=isSameTree(p->right, q->right);
        return L && R;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
