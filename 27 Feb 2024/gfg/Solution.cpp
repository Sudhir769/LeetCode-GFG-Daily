#include <bits/stdc++.h>
using namespace std;

int *game_with_number(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i] | arr[i + 1];
    }
    return arr;
}

int main(){
    int t; cin>>t;
    while(t--){
        
    }
}

