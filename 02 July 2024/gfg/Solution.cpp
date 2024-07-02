#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    bool compute(Node *head)
    {
        Node *curr = head;
        string str = "";

        while (curr)
        {
            str += curr->data;
            curr = curr->next;
        }
        string temp = str;
        reverse(temp.begin(), temp.end());

        return str == temp;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

