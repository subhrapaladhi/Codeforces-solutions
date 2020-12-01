// https://leetcode.com/problems/search-a-2d-matrix-ii/
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int x = m-1, y = 0;

    while((x<m && x>=0) && (y<n && y>=0)) {
        if(matrix[x][y] == target) {
            return true;
        } else if(matrix[x][y] < target) {
            y++;
        } else {
            x--;
        }
    }

    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}