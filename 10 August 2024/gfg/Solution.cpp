#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        if (!head)
            return nullptr;

        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }

        temp->next = head;

        while (--k)
            head = head->next;

        Node *newHead = head->next;
        head->next = NULL;

        return newHead;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

