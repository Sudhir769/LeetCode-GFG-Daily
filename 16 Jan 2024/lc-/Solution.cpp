#include <bits/stdc++.h>
using namespace std;

class RandomizedSet {
public:
    unordered_set<int>st;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(st.count(val)){
            return false;
        }else{
            st.insert(val);
            return true;
        }
    }
    
    bool remove(int val) {
        if(st.count(val)){
            st.erase(val);
            return true;
        }else{
            return false;
        }
    }
    
    int getRandom() {
        int pos = rand() % st.size();
        return *next(st.begin(), pos);
    }
};


int main(){
    int t; cin>>t;
    while(t--){
        
    }
}
