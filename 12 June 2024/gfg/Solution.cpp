#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int countNumberswith4(int n) {
        int count = 0;
        for(int i=1; i<=n; i++)
        {
           string str = to_string(i);
           size_t found = str.find('4');
           
           if(found != string::npos)
           {
                count++;
           }
        }
        return count;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

