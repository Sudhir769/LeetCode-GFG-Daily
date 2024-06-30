#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;

    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Solution
{
public:
    Node *deleteNode(Node *head, int x)
    {
        if (x == 1)
            return head->next;
        Node *curr = head;

        while ((x - 2) != 0)
        {
            curr = curr->next;
            x--;
        }
        curr->next = curr->next->next;
        return head;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

