#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class Solution {
public:
    Node* next_node(Node* node, int val){
        Node* newNode = new Node();
        newNode->data = val;
        node->next = newNode;
        newNode->next = NULL;
        return newNode;
    }
    
    Node* reverse(Node* node){
        Node* prev = NULL;
        Node* cur = node;
        Node* next = NULL;
        
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        
        return prev;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
            if(node1 == NULL){
            return reverse(node2);
        }
        if(node2 == NULL)return reverse(node1);
        
        Node* head = new Node();
        
        if(node1->data <= node2->data){
            head->data = node1->data;
            node1 = node1->next;
            
        }
        else {
            head->data = node2->data;
            node2 = node2->next;
        }
        Node* new_head = head;
        
        while(node1 != NULL && node2 != NULL){
            if(node1->data <= node2->data){
                next_node(head,node1->data);
                head = head->next;
                node1 = node1->next;
            }
            else {
                next_node(head,node2->data);
                head = head->next;
                node2 = node2->next;
            }
        }
        while(node1 != NULL){
            next_node(head,node1->data);
                head = head->next;
                node1 = node1->next;
        }
        while(node2 != NULL){
            next_node(head,node2->data);
                head = head->next;
                node2 = node2->next;
        }
        
        head = reverse(new_head);
        return head;

    }  
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

