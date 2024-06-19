#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    double maxVolume(double perimeter, double area)
    {
        double l = (double)(perimeter - sqrt(perimeter * perimeter - 24 * area)) / 12;
        double height = (perimeter / 4) - (2 * (l));
        double ans = l * l * height;
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

