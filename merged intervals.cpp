// https://leetcode.com/problems/merge-intervals/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals){
    vector<vector<int>> merged;
    sort(intervals.begin(),intervals.end());
    merged.push_back(intervals[0]);
    int last=0;

    for(int i=0; i<intervals.size(); i++){
        if(intervals[i][0]<=merged[last][1]){
            if(intervals[i][1]>merged[last][1]) merged[last][1] = intervals[i][1];
        } else {
            merged.push_back(intervals[i]);
            last++;
        }
    }
    
    return merged;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}