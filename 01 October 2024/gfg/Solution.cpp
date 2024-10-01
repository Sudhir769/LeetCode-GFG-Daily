#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


// struct Node {
//     int data;
//     Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

class solution {
  public:
    // 499 786 632
    // 290 69 7
    int mod = 1e9+7;
    void digit(Node* node, long long &num){
        if(node == NULL) return;
        
        num = (num * 10 + node->data) % mod;
        digit(node->next, num);
        return;
    }
    long long multiplyTwoLists(Node *first, Node *second) {
        long long num1 = 0, num2 = 0;
        
        digit(first, num1);
        digit(second, num2);
        
        return (num1 * num2) % mod;
        
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

