#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* npx;
    Node(int x){
        data = x;
        npx = NULL;
    }
};

struct Node *insert(struct Node *head, int data)
{
    Node *newNode = new Node(data);
    newNode->npx = head;
    return newNode;
}

vector<int> getList(struct Node *head)
{
    Node *temp = head;
    vector<int> ans;
    while (temp)
    {
        ans.push_back(temp->data);
        temp = temp->npx;
    }
    return ans;
}

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

