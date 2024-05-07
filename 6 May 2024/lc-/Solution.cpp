#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *removeNodes(ListNode *head)
    {
        ListNode *curr = head;
        stack<ListNode *> st;

        while (curr != NULL)
        {
            while (!st.empty() and st.top()->val < curr->val)
            {
                st.pop();
            }
            st.push(curr);
            curr = curr->next;
        }

        ListNode *next = NULL;
        while (!st.empty())
        {
            curr = st.top();
            st.pop();

            curr->next = next;
            next = curr;
        }
        return curr;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
