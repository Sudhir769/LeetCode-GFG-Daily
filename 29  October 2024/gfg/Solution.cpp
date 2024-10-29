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
        Node *partition(Node *head, Node *last)
        {
            Node *i = head;
            Node *j = head->next;

            while (j != last)
            {
                if (j->data < head->data)
                {
                    i = i->next;
                    swap(i->data, j->data);
                }
                j = j->next;
            }
            swap(i->data, head->data);
            return i;
        }

        void Quick(Node *head, Node *last)
        {
            if (head == last or head->next == last)
            {
                return;
            }
            Node *p = partition(head, last);
            Quick(head, p);
            Quick(p->next, last);
        }

        struct Node *quickSort(struct Node *head)
        {
            Quick(head, NULL);
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
