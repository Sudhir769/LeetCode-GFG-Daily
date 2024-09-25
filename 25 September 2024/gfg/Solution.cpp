#include <bits/stdc++.h>
using namespace std;


struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution
{
public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {

        Node *revHead = NULL;

        Node *temp = head;

        while (temp)
        {
            Node *newHead = new Node(temp->data);
            newHead->next = revHead;
            revHead = newHead;
            temp = temp->next;
        }

        temp = head;
        while (temp and revHead)
        {
            if (temp->data != revHead->data)
            {
                return false;
            }
            temp = temp->next;
            revHead = revHead->next;
        }
        return true;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

