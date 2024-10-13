#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
public:
    void deleteAlt(struct Node *head)
    {
        Node *temp = head;
        Node *next = NULL;
        Node *prev = NULL;
        while (temp != NULL && temp->next != NULL)
        {
            next = temp->next->next;
            temp->next->next = prev;
            temp->next = next;
            temp = temp->next;
            next = NULL;
        }
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

