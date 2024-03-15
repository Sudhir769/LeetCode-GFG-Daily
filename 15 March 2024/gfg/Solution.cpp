#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    void reverse(Node **head)
    {
        Node *prev = NULL;
        Node *next = NULL;
        Node *curr = *head;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        *head = prev;
    }
    void sort(Node **head)
    {
        if (*head == NULL or (*head)->next == NULL)
            return;

        Node *odd = *head;
        Node *even = (*head)->next;
        Node *evenhead = (*head)->next;

        while (even != NULL and even->next != NULL)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }

        reverse(&evenhead);
        odd->next = evenhead;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

