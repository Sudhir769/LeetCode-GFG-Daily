#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head)
    {
        Node *slow = head, *fast = head;

        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                break;
        }

        if (fast == NULL or fast->next == NULL)
        {
            return 0;
        }

        Node *temp = slow->next;
        int res = 0;
        while (temp != slow)
        {
            res++;
            temp = temp->next;
        }
        return res + 1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

