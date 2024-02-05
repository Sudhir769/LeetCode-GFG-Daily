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
    Node *sortedInsert(Node *head, int data)
    {
        if (!head)
        {
            Node *newNode = new Node(data);
            newNode->next = newNode;
            return newNode;
        }

        Node *cur = head;
        while (1)
        {
            if (data >= cur->data and data <= cur->next->data)
            {
                Node *newNode = new Node(data);
                newNode->next = cur->next;
                cur->next = newNode;
                break;
            }

            if (cur->next != head)
            {
                cur = cur->next;
            }
            else
            {
                Node *newNode = new Node(data);
                cur->next = newNode;
                newNode->next = head;

                if (data <= head->data)
                {
                    head = newNode;
                }
                break;
            }
        }
        return head;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
}
