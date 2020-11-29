// https://leetcode.com/problems/minimum-size-subarray-sum/
#include<bits/stdc++.h>
using namespace std;

int minSubArrayLen(int s, vector<int> &nums){
    int minlen = INT_MAX, sum=0, left=0;

    for(int i=0; i<nums.size(); i++){
        sum += nums[i];

        while(sum>=s){
            minlen = min(minlen,i+1-left);
            sum -= nums[left++];
        }
    }

    return minlen != INT_MAX ? minlen : 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}