#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int swapNibbles(int n)
    {
        vector<int> bin(8, 0);

        for (int i = 7; i >= 0; i--)
        {
            bin[i] = (n & 1);
            n >>= 1;
        }
        for (int i = 0; i < 4; i++)
        {
            swap(bin[i], bin[i + 4]);
        }
        int result = 0;
        for (int i = 0, j = 7; i < 8; i++, j--)
        {
            result += bin[i] * (pow(2, j));
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

