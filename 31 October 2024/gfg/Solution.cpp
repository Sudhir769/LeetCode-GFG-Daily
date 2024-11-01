#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class Solution
{
public:
    Node *sortedInsert(Node *head, int x)
    {
        Node *newNode = new Node();
        newNode->data = x;

        if (head->data >= x)
        {
            head->prev = newNode;
            newNode->next = head;
            newNode->prev = NULL;
            return newNode;
        }

        Node *temp = head;
        while (temp->next and temp->data < x)
        {
            temp = temp->next;
        }

        if (temp->next == NULL and temp->data < x)
        {
            temp->next = newNode;
            newNode->prev = temp;
            newNode->next = NULL;
            return head;
        }

        Node *prev = temp->prev;
        prev->next = newNode;
        newNode->prev = prev;
        newNode->next = temp;
        temp->prev = newNode;
        return head;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

