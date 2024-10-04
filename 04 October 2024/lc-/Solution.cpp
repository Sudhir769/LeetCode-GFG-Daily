#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long dividePlayers(vector<int> &skill)
    {
        int n = skill.size();

        sort(skill.begin(), skill.end());
        int i = 0;
        int j = n - 1;
        int s = skill[i] + skill[j];

        long long chem = 0;
        while (i < j)
        {
            int curr = skill[i] + skill[j];
            if (curr != s)
            {
                return -1;
            }
            chem += (long long)skill[i] * (long long)skill[j];
            i++, j--;
        }
        return chem;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
