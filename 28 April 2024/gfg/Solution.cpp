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
    Node *deleteMid(Node *head)
    {
        if (head == NULL or head->next == NULL)
        {
            return NULL;
        }
        Node *slow = head;
        Node *fast = head;
        Node *prev = new Node(-1);

        prev->next = head;

        while (fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            prev = prev->next;
        }
        prev->next = slow->next;
        delete (slow);
        return head;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

