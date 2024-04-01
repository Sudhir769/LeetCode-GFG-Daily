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
    vector<int> in;

    void inorder(Node *root)
    {
        if (root)
        {
            inorder(root->left);
            in.push_back(root->data);
            inorder(root->right);
        }
    }

    void merge(vector<int> &vec, int low, int mid, int high, int &cnt)
    {
        vector<int> ans(high - low + 1);
        int i = low, j = mid + 1, k = 0;

        while (i <= mid and j <= high)
        {
            if (vec[i] <= vec[j])
            {
                ans[k++] = vec[i++];
            }
            else
            {
                ans[k++] = vec[j++];
                cnt += (mid - i + 1);
            }
        }

        while (i <= mid)
        {
            ans[k++] = vec[i++];
        }
        while (j <= high)
        {
            ans[k++] = vec[j++];
        }
        for (i = low; i <= high; i++)
        {
            vec[i] = ans[i - low];
        }
    }

    void mergeSort(vector<int> &vec, int low, int high, int &cnt)
    {
        if (low < high)
        {
            int mid = (low + high) / 2;
            mergeSort(vec, low, mid, cnt);
            mergeSort(vec, mid + 1, high, cnt);
            merge(vec, low, mid, high, cnt);
        }
    }

    int pairsViolatingBST(int n, Node *root)
    {
        inorder(root);

        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(in[i] > in[j]){
        //             cnt++;
        //         }
        //     }
        // }

        int cnt = 0;
        mergeSort(in, 0, n - 1, cnt);
        ;

        return cnt;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
