#include <bits/stdc++.h>
using namespace std;

struct TrieNode
{
    int countP;
    TrieNode *children[26];
};

class Solution
{
public:
    TrieNode *getTrieNode()
    {
        TrieNode *newNode = new TrieNode();
        for (int i = 0; i < 26; i++)
        {
            newNode->children[i] = NULL;
        }
        newNode->countP = 0;
        return newNode;
    }

    void insert(string word, TrieNode *root)
    {
        TrieNode *crawl = root;

        for (auto ch : word)
        {
            int ind = ch - 'a';
            if (!crawl->children[ind])
            {
                crawl->children[ind] = getTrieNode();
            }
            crawl->children[ind]->countP += 1;
            crawl = crawl->children[ind];
        }
    }

    int getScore(string word, TrieNode *root)
    {
        TrieNode *crawl = root;
        int score = 0;

        for (auto ch : word)
        {
            int ind = ch - 'a';

            score += crawl->children[ind]->countP;
            crawl = crawl->children[ind];
        }
        return score;
    }

    vector<int> sumPrefixScores(vector<string> &words)
    {
        int n = words.size();
        TrieNode *root = getTrieNode();

        for (auto word : words)
        {
            insert(word, root);
        }

        vector<int> result(n);
        for (int i = 0; i < n; i++)
        {
            result[i] = getScore(words[i], root);
        }
        return result;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
