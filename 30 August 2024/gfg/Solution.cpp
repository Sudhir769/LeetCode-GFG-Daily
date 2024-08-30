#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
     vector<vector<int>> ans;
    
    bool check(vector<vector<char>>& board , int i , int j){
        int x = i , y = j;
        // up
        while(x >= 0){
            if(board[x][y] == 'Q'){
                return false;
            }
            x--;
        }
        // left diag up
        x = i;
        while(x >= 0 && y >= 0){
            if(board[x][y] == 'Q') return false;
            x--;
            y--;
        }
        // right diag up
        x = i , y = j;
        while(x >= 0 && y < board.size()){
            if(board[x][y] == 'Q') return false;
            x--;
            y++;
        }
        return true;
    }
    
    void insertAns(vector<vector<char>>& board){
        vector<int> row;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if(board[j][i] == 'Q'){
                    row.push_back(j+1);
                    break;
                }
            }
        }
        if(row.size() == board.size()){
            ans.push_back(row);
        }
    }
    void solve(vector<vector<char>> &board , int i , int n){
        if(i >= n){
            insertAns(board);
            return;
        }
        
        for(int j=0;j<board.size();j++){
            if(check(board,i,j)){
                board[i][j] = 'Q';
                solve(board,i+1,n);
                board[i][j] = '-';
            }
        }
        
    }
    vector<vector<int>> nQueen(int n) {
        vector<vector<char>> board(n,vector<char>(n,'-'));
        solve(board,0,n);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

