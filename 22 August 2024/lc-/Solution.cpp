#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findComplement(int num)
    {
        int i = 0;
        int comp = 0;

        while (num)
        {
            if (!(num & 1))
            {
                comp |= (1 << i);
            }
            num >>= 1;
            i++;
        }
        return comp;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
