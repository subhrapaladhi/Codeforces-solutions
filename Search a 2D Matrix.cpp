// https://leetcode.com/problems/search-a-2d-matrix/
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    if(matrix.size()==0) return false;
    int n = matrix.size(), m = matrix[0].size();
    int start=0, end=n*m-1, mid;

    while(start<=end){
        mid = (start+end)/2;
        
        if(matrix[mid/n][mid%n]==target) return true;
        else if(matrix[mid/n][mid%n]<target) start = mid+1;
        else end = mid-1;
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}