#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isLengthEven(struct Node **head)
    {
        Node *slow = *head;
        Node *fast = *head;

        while (fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return fast ? 0 : 1;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

