#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reversePrefix(string word, char ch)
    {
        int j = word.find(ch);
        int i = 0;
        while (i <= j)
        {
            swap(word[i], word[j]);
            i++, j--;
        }
        return word;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
