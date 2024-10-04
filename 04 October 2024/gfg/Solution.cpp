#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to reverse a circular linked list
    Node* reverse(Node* head) {
        
        Node* prev = NULL;
        Node* curr = head;
        while(curr->next != head){
            Node* next = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next;
        }
        curr->next = prev;
        head->next = curr;
        return curr;
    }

    // Function to delete a node from the circular linked list
    Node* deleteNode(Node* head, int key) {
        
        if(head->data == key){
            Node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = head->next;
            return head->next;
        }
        
        Node* fast = head;
        Node* slow = head;
        
        do{
            
            if(slow->next->data == key){
                slow->next = slow->next->next;
                return head;
            }
            slow = slow->next;
            fast = fast->next->next;
            
        }while(fast != slow);
        
        return head;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

