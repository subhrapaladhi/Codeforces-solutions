// https://leetcode.com/problems/k-closest-points-to-origin/
#include<bits/stdc++.h>
using namespace std;

typedef pair<double,vector<int>> db_int;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k){
    priority_queue<db_int, vector<db_int>, greater<db_int>> dist_point;
    vector<vector<int>> result;
    double diff;

    for(auto x : points){
        diff = (x[0]*x[0]) + (x[1]*x[1]);
        dist_point.push(make_pair(diff,x));
    }

    for(int i=0; i<k; i++){
        result.push_back(dist_point.top().second);
        dist_point.pop();
    }

    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}