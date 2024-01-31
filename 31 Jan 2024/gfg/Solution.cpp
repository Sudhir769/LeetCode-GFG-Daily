#include <bits/stdc++.h>
using namespace std;

#define ALPHABET_SIZE (26)

struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};



class Solution
{
    public:
        //Function to insert string into TRIE.
        void insert(struct TrieNode *root, string key)
        {
            for(auto i:key){
                if(root->children[i-'a']){
                    root = root->children[i-'a'];
                }else{
                    TrieNode* newNode = getNode();
                    root->children[i-'a'] = newNode;
                    root = newNode;
                }
            }
            root->isLeaf = 1;
        }
        
        //Function to use TRIE data structure and search the given string.
        bool search(struct TrieNode *root, string key) 
        {
            for(auto i:key){
                if(root->children[i-'a']){
                    root = root->children[i-'a'];
                }else{
                    return 0;
                }
            }
            return root->isLeaf;
        }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

