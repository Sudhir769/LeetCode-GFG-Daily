#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int mod = 1e9+7;
	int TotalWays(int N)
	{
	    long a=1, b=1, c=0;
	    
	    for(int i=1; i<=N; i++){
	        c = (a%mod + b%mod)%mod;
	        a = b%mod;
	        b = c%mod;
	    }
	    return (int)((c*c)%mod);
	}
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

