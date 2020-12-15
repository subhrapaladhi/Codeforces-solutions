// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
#include<bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,int>> pip;

int kthSmallest(vector<vector<int>>& mat, int k){
    int n = mat.size();
    priority_queue<pip,vector<pip>,greater<pip>> pq;

    for(int i=0; i<n; i++)
        pq.push({mat[0][i], {0,i}});
    
    int ans, row, col;

    while(k--){
        ans = pq.top().first;
        row = pq.top().second.first;
        col = pq.top().second.second;
        pq.pop();
        if(row < n-1)
            pq.push({mat[row+1][col], {row+1, col}});
    }

    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}