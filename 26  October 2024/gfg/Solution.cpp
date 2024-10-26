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
    int count(struct Node *head, int key)
    {
        int cnt = 0;
        Node *temp = head;

        while (temp)
        {
            if (temp->data == key)
            {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

