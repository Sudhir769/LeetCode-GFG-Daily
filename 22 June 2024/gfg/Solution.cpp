#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long ExtractNumber(string sentence)
    {
        long long int ans = -1;
        stringstream stm(sentence);
        string word;

        while (stm >> word)
        {
            if (all_of(word.begin(), word.end(), ::isdigit))
            {
                if (word.find('9') == string::npos)
                {
                    ans = max(ans, stoll(word));
                }
            }
        }
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

