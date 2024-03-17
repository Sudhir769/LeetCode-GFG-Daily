#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int countPairs(struct Node *head1, struct Node *head2, int x)
    {
        unordered_map<int, int> mp;
        Node *temp = head1;
        while (temp)
        {
            int val = temp->data;
            mp[val]++;
            temp = temp->next;
        }
        temp = head2;
        int cnt = 0;
        while (temp)
        {
            int val = temp->data;
            if (mp.find(x - val) != mp.end())
            {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

