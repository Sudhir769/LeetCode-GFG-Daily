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
    Node *removeAllDuplicates(struct Node *head)
    {
        Node *temp = head;
        Node *prev = new Node(-1);
        Node *newHead = prev;

        while (temp)
        {
            int curr = temp->data;
            Node *t = temp;
            bool flag = false;

            while (t->next and t->next->data == curr)
            {
                flag = true;
                t = t->next;
            }

            if (!flag)
            {
                prev->next = temp;
                prev = prev->next;
            }
            temp = t->next;
        }
        prev->next = NULL;
        return newHead->next;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

