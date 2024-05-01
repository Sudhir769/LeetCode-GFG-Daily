#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    struct Node *next;

    Node(char x)
    {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
    bool isVowel(char ch)
    {
        return st.count(ch);
    }
    struct Node *arrangeCV(Node *head)
    {

        Node *temp = head;

        Node *vowel = new Node('v');
        Node *cons = new Node('c');

        Node *t1 = vowel, *t2 = cons;

        while (temp)
        {

            if (isVowel(temp->data))
            {
                vowel->next = temp;
                vowel = vowel->next;
            }
            else
            {
                cons->next = temp;
                cons = cons->next;
            }
            temp = temp->next;
        }
        vowel->next = t2->next;
        cons->next = NULL;
        return t1->next;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

