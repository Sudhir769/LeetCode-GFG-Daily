#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minOperations(vector<string> &logs)
    {
        int depth = 0;

        for (auto log : logs)
        {
            if (log == "../")
            {
                depth--;
                depth = max(0, depth);
            }
            else if (log != "./")
            {
                depth++;
            }
        }
        return depth;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
