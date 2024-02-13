#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    Node* cloneGraph(Node* node) {
        Node* newStart = new Node(node->val);
        unordered_map<int, Node*>vis;
        
        function<void(Node*, Node*)>dfs = [&](Node* currNode, Node* orgNode){
            vis[currNode->val] = currNode;
            
            for(auto child : orgNode->neighbors){
                
                bool notVis = vis.find(child->val) == vis.end();
                Node* childNode;
                
                if(notVis){
                    childNode = new Node(child->val);
                }else{
                    childNode = vis[child->val];
                }
                
                (currNode->neighbors).push_back(childNode);
                if(notVis){
                    dfs(childNode, child);
                }
            }
        };
        
        dfs(newStart, node);
        return newStart;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

