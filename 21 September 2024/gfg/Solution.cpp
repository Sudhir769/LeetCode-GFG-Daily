#include <bits/stdc++.h>
using namespace std;

//  Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
public:
    Node *copyList(Node *head)
    {
        if (head == NULL)
            return head;

        Node *temp = head;
        while (temp)
        {
            Node *newNode = new Node(temp->data);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }

        temp = head;
        Node *head2 = temp->next;

        while (temp)
        {
            if (temp->random == NULL)
            {
                temp->next->random = NULL;
            }
            else
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }

        temp = head;
        while (temp)
        {
            Node *temp2 = temp->next;
            temp->next = temp2->next;
            if (temp2->next)
            {
                temp2->next = temp2->next->next;
            }
            temp = temp->next;
        }
        return head2;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

