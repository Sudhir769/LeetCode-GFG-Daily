#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node *deleteK(Node *head, int k)
    {
        if (k == 1)
            return NULL;

        Node *temp = head;
        int cnt = 1;

        while (temp and temp->next)
        {
            if (cnt + 1 == k)
            {
                temp->next = temp->next->next;
                temp = temp->next;
                cnt = 1;
            }
            else
            {
                cnt++;
                temp = temp->next;
            }
        }
        return head;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

