#include <bits/stdc++.h>
using namespace std;

//Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

class Solution {
public:
    Node* insertionSort(struct Node* head)
    {
        if(head==NULL || head->next==NULL) return head;
        Node *p = head->next, *start=head, *end=head;
        while(p){
            if(p->data>= start->data && p->data < end->data){
                Node *x = start;
                while(p->data > x->next->data && x->next != end){
                    x = x->next;
                }
                end->next = p->next;
                p->next = x->next;
                x->next = p;
                x = start;
            }
            else if(p->data < start->data){
                end->next = p->next;
                p->next = start;
                start = p;
            }
            else{
                end = end->next;
            }
            p = end->next;
        }
        return start;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

