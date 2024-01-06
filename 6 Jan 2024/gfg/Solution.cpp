#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int getPoints(int x){
        int points = 0;
        int temp = x;
        
        for(int i=2; i*i <=temp; i++){
            while(x%i == 0){
                points++;
                x = x / i;
            }
        }
        if(x!=1) points++;
        return points;
    }
    
	int sumOfPowers(int a, int b){
	    int result = 0;
	    
	    while(a <= b){
	        result += getPoints(a);
	        a++;
	    }
	    return result;
	}
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

