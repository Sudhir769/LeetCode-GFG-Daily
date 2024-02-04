#include <bits/stdc++.h>
using namespace std;

struct Node
{
    bool data;   
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node* rev(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr){
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    Node* trim(Node* head){
        while(head&&head->next&&head->data==0){
            head=head->next;
        }
        return head;
    }
    
    int size(Node* head){
        int s = 0;
        while(head){
            s++;
            head=head->next;
        }
        return s;
    }
    
    bool isGreator(Node* h1,Node*h2){
        while(h1&&h1->data==h2->data){
            h1=h1->next;
            h2=h2->next;
        
        }
        if(h1&&h1->data<h2->data){
            return false;
        }
        return true;
    }
    
    Node* subLinkedList(Node* head1, Node* head2) {
        head1=trim(head1);
        head2=trim(head2);
        int n = size(head1);
        int m = size(head2);
        //standrize by making sure head1 is greator always greator than head2;
        if(n<m){
            swap(head1,head2);
        }else if(n==m && !isGreator(head1,head2)){
                swap(head1,head2);
        }
        head1 = rev(head1);
        head2 = rev(head2);
        Node* dummy = new Node(-1);
        Node* curr = dummy;
        int rem = 0, val1,val2;
        while(head1){
            val1 = head1->data;
            val2 = head2? head2->data+rem:rem;
            if(val2>val1){
                val1+=10;
                rem=1;
            }else{
                rem=0;
            }
            curr->next=new Node(val1-val2);
            curr=curr->next;
            head1=head1->next;
            head2=head2?head2->next:head2;
        }
       
        Node* ans = rev(dummy->next);
        ans=trim(ans);
        return ans;
        return NULL;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

