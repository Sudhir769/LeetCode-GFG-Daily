#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange)
    {

        int drink = 0;
        while (numBottles >= numExchange)
        {
            drink += numExchange;
            numBottles -= numExchange;
            numBottles += 1;
        }
        return drink + numBottles;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
