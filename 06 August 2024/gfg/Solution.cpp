#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int isValid(string s)
    {
        int dotCount = 0;
        int num = 0;
        int segmentLength = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                if (segmentLength == 0 || segmentLength > 3 || num > 255)
                {
                    return 0;
                }
                dotCount++;
                num = 0;
                segmentLength = 0;
            }
            else if (isdigit(s[i]))
            {
                num = num * 10 + (s[i] - '0');
                segmentLength++;
                if (segmentLength > 1 && num < 10)
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }

        if (segmentLength == 0 || segmentLength > 3 || num > 255)
        {
            return 0;
        }

        return (dotCount == 3) ? 1 : 0;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

