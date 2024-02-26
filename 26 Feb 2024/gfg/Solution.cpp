#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<string>ans;
	void solve(int ind, string temp, string s, int n){
	    if(ind >= n){
	        ans.push_back(temp);
	        return;
	    }

	    solve(ind+1, temp + s[ind] ,s ,n);
	    solve(ind+1, temp, s, n);
	}
	vector<string> AllPossibleStrings(string s){
	    int n = s.length();
    
	    solve(0, "", s, n);
    
	    sort(ans.begin(), ans.end());
	    ans.erase(ans.begin()+0);
	    return ans;
	}
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

