// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
#include<bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, int x){
    int n = nums.size(), target = accumulate(nums.begin(),nums.end(),0)-x;

    if(target==0) return n;
    if(target<0) return -1;

    int start=0, end=0, sum=0, maxlen=-1;

    while(end<n){
        sum+=nums[end++];
        while(sum>target) sum-=nums[start++];
        if(sum==target) maxlen = max(maxlen,end-start);
    }

    if(maxlen==-1) return -1;
    return n-maxlen;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}