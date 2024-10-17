#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;   
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
    public:
    vector<Node*> alternatingSplitList(struct Node* head) {
        Node* temp1 = head;
        Node* first = head;
        Node* temp2 = head->next;
        Node* second = temp2;
        
        while(temp2){
            temp1->next = temp2->next;
            temp1 = temp2;
            temp2 = temp2->next;
        }
        return {first, second};
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

