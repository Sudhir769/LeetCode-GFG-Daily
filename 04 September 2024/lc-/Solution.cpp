#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int robotSim(vector<int> &commands, vector<vector<int>> &obstacles)
    {
        unordered_set<string> st;
        for (auto &obs : obstacles)
        {
            string key = to_string(obs[0]) + "_" + to_string(obs[1]);
            st.insert(key);
        }

        int x = 0, y = 0, maxD = 0;
        pair<int, int> dir = {0, 1};

        for (int i = 0; i < commands.size(); i++)
        {
            if (commands[i] == -2)
            {
                dir = {-dir.second, dir.first};
            }
            else if (commands[i] == -1)
            {
                dir = {dir.second, -dir.first};
            }
            else
            {
                for (int step = 0; step < commands[i]; step++)
                {
                    int newX = x + dir.first;
                    int newY = y + dir.second;

                    string nextKey = to_string(newX) + "_" + to_string(newY);
                    if (st.find(nextKey) != st.end())
                    {
                        break;
                    }
                    x = newX;
                    y = newY;
                }
            }
            maxD = max(maxD, x * x + y * y);
        }
        return maxD;
    }
};

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}