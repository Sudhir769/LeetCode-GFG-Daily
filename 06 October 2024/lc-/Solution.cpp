#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool areSentencesSimilar(string s1, string s2)
    {
        if (s1.length() < s2.length())
        {
            swap(s1, s2);
        }
        deque<string> deq1, deq2;

        stringstream ss1(s1);
        stringstream ss2(s2);

        string token;
        while (ss1 >> token)
        {
            deq1.push_back(token);
        }
        while (ss2 >> token)
        {
            deq2.push_back(token);
        }

        while (!deq1.empty() and !deq2.empty() and
               deq1.front() == deq2.front())
        {
            deq1.pop_front();
            deq2.pop_front();
        }
        while (!deq1.empty() and !deq2.empty() and deq1.back() == deq2.back())
        {
            deq1.pop_back();
            deq2.pop_back();
        }
        return deq2.empty();
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
