// https://leetcode.com/problems/min-cost-climbing-stairs/
#include<bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost){
    int curr, one = cost[0], two = cost[1];

    for(int i=2; i<cost.size(); i++){
        curr = min(one,two)+cost[i];
        one = two;
        two = curr;
    }

    return min(one,two);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}