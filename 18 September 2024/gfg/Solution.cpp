#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int n = x.length();
        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            char ch = x[i];
            if (ch == '{' or ch == '(' or ch == '[')
            {
                st.push(x[i]);
            }
            else
            {
                if (st.empty())
                    return false;

                char top = st.top();
                if ((top == '(' and ch == ')') or
                    (top == '{' and ch == '}' or
                     (top == '[' and ch == ']')))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

