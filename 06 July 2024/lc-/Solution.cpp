#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int passThePillow(int n, int time)
    {
        int N = 2 * n - 2;
        int x = time % N;

        return 1 + ((x < n) ? x : N - x);
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
