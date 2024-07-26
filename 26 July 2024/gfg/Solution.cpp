#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool kPangram(string str, int k)
    {
        int n = str.length();

        if (n < 26)
        {
            return false;
        }

        vector<int> hash(26, 0);
        for (int i = 0; i < n; i++)
        {
            if (str[i] != ' ')
                hash[str[i] - 'a']++;
        }

        int sum = 0, zero = 0;
        for (int i = 0; i < 26; i++)
        {
            if (hash[i] > 0)
            {
                sum += hash[i];
            }
            else
            {
                zero++;
            }
        }

        if (zero > k or sum < 26)
        {
            return false;
        }
        return true;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

