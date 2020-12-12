// https://leetcode.com/problems/furthest-building-you-can-reach/
#include<bits/stdc++.h>
using namespace std;

int furthestBuilding(vector<int>& heights, int bricks, int ladders){
    int bricksUsed = 0, diff;
    priority_queue<int,vector<int>,greater<int>> ladderUsed;

    for(int i=0; i<heights.size()-1; i++){
        diff = heights[i+1]-heights[i];
        if(diff>0){
            if(ladderUsed.size()<ladders){
                ladderUsed.push(diff);
            } else {
                if(ladders == 0){
                    bricksUsed += diff;
                } else if(diff > ladderUsed.top()) {
                    diff += ladderUsed.top();
                    ladderUsed.pop();
                    ladderUsed.push(diff);
                } else {
                    bricksUsed += diff;
                }
            }
        }

        if(bricksUsed>bricks) return i;
    }

    return heights.size()-1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}