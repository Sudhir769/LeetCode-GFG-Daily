#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node *head, int n)
    {
        int sum = 0;
        int len = 0;
        Node *i = head;
        Node *j = head;
        while (j != nullptr)
        {
            sum += j->data;
            len++;
            if (len > n)
            {
                sum -= i->data;
                i = i->next;
                len--;
            }
            j = j->next;
        }
        return sum;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

