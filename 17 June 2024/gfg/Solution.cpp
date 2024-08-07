#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string doIntersect(int p1[], int q1[], int p2[], int q2[])
    {
        auto onSegment = [](int p[], int q[], int r[]) -> bool
        {
            if (q[0] <= std::max(p[0], r[0]) && q[0] >= std::min(p[0], r[0]) &&
                q[1] <= std::max(p[1], r[1]) && q[1] >= std::min(p[1], r[1]))
            {
                return true;
            }
            return false;
        };

        auto orientation = [](int p[], int q[], int r[]) -> int
        {
            long long val = (long long)(q[1] - p[1]) * (r[0] - q[0]) - (long long)(q[0] - p[0]) * (r[1] - q[1]);
            if (val == 0)
                return 0;
            return (val > 0) ? 1 : 2;
        };

        int o1 = orientation(p1, q1, p2);
        int o2 = orientation(p1, q1, q2);
        int o3 = orientation(p2, q2, p1);
        int o4 = orientation(p2, q2, q1);

        if (o1 != o2 && o3 != o4)
        {
            return "true";
        }

        if (o1 == 0 && onSegment(p1, p2, q1))
            return "true";
        if (o2 == 0 && onSegment(p1, q2, q1))
            return "true";
        if (o3 == 0 && onSegment(p2, p1, q2))
            return "true";
        if (o4 == 0 && onSegment(p2, q1, q2))
            return "true";

        return "false";
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

