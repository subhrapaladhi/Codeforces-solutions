// https://leetcode.com/problems/spiral-matrix/
#include<bits/stdc++.h>
using namespace std;

void compute(vector<vector<int>>& matrix, vector<int> &res){
    if(matrix.size()==0 || matrix[0].size()==0) return ;

    int right=matrix[0].size();
    for(int i=0; i<=right; i++)
        res.push_back(matrix[0][i]);
    matrix.erase(matrix.begin());
    if(matrix.size()==0 || matrix[0].size()==0) return ;

    int bottom=matrix.size();
    for(int i=0; i<=bottom; i++){
        res.push_back(matrix[i][right]);
        matrix[i].erase(matrix[i].begin()+right);
    }
    if(matrix.size()==0 || matrix[0].size()==0) return ;

    right--;
    for(int i=right; i>=0; i--)
        res.push_back(matrix[bottom][i]);
    matrix.erase(matrix.end());
    if(matrix.size()==0 || matrix[0].size()==0) return ;

    bottom--;
    for(int i=bottom; i>=0; i--){
        res.push_back(matrix[i][0]);
        matrix[i].erase(matrix[i].begin());
    }
    if(matrix.size()==0 || matrix[0].size()==0) return ;

    compute(matrix,res);
}

vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int> res;
    compute(matrix,res);
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}