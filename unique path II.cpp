// https://leetcode.com/problems/unique-paths-ii/
#include<bits/stdc++.h>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obsGrid){
    int m=obsGrid.size(), n=obsGrid[0].size();
    vector<vector<int>> count(m,vector<int>(n));
    
    bool flag = false;
    for(int i=0; i<m; i++){
        if(obsGrid[i][0]==1) flag = true;
        flag ? count[i][0] = 0 : count[i][0] = 1;
    }
    flag = false;
    for(int i=0; i<n; i++){
        if(obsGrid[0][i]==1) flag = true;
        flag ? count[0][i] = 0 : count[0][i] = 1;
    }

    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(obsGrid[i][j]==1){
                count[i][j] = 0;
                continue;
            }
            count[i][j] = count[i-1][j] + count[i][j-1];
        }
    }

    return count[m-1][n-1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}