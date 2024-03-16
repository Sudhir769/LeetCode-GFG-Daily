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
    void deleteNode(Node *del_node)
    {
        Node *temp = del_node;
        Node *prev;
        while (temp->next != NULL)
        {
            temp->data = temp->next->data;
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        delete temp;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

