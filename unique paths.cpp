// https://leetcode.com/problems/unique-paths/
#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n){
    vector<vector<int>> count(m,vector<int>(n));

    for(int i=0; i<m; i++) count[i][0] = 1;
    for(int i=0; i<n; i++) count[0][i] = 1;

    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++)
            count[i][j] = count[i][j-1] + count[i-1][j];
    }

    return count[m-1][n-1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}