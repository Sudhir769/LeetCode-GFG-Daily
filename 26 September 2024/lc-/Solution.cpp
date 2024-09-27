#include <bits/stdc++.h>
using namespace std;

class MyCalendar
{
public:
    unordered_map<int, int> um;
    MyCalendar()
    {
    }

    bool book(int x, int y)
    {
        for (auto &val : um)
        {
            int a = val.first, b = val.second;

            if (!(y <= a || x >= b))
            {
                return false;
            }
        }
        um[x] = y;
        return true;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
