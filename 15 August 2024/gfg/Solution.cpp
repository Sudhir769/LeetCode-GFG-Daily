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

class Solution
{
public:
    int add(Node *head)
    {
        if (head == NULL)
        {
            return 1;
        }

        int carry = add(head->next);
        int val = head->data;
        head->data = (val + carry) % 10;
        return (val + carry) / 10;
    }
    Node *addOne(Node *head)
    {
        int c = add(head);
        if (c == 1)
        {
            Node *newHead = new Node(1);
            newHead->next = head;
            return newHead;
        }
        return head;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

