#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *curr = head->next;
        ListNode *ans = new ListNode(-1);
        ListNode *temp = ans;
        while (curr)
        {
            int sum = 0;
            while (curr and curr->val != 0)
            {
                sum += curr->val;
                curr = curr->next;
            }
            temp->next = new ListNode(sum);
            temp = temp->next;

            curr = curr->next;
        }
        return ans->next;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
