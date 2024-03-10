#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string removeDuplicates(string str)
    {
        unordered_set<char> st;
        string temp = "";
        for (auto it : str)
        {
            if (st.count(it) == 0)
            {
                temp += it;
                st.insert(it);
            }
        }
        return temp;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

