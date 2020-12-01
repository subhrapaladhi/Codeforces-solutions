// https://leetcode.com/problems/majority-element/
#include<bits/stdc++.h>
using namespace std;

pair<int,int> helper(vector<int> &nums, int l, int r){
    if(l==r)
        return make_pair(nums[l],1);
    
    int mid = (l+r)/2;
    pair<int,int> left = helper(nums,0,mid);
    pair<int,int> right = helper(nums,mid+1,r);

    int ele,count;
    if(left.first==right.first){
        ele = left.first;
        count = left.second + right.second;
    } else if(left.second<right.second){
        ele = right.first;
        count = right.second-left.second;
    } else {
        ele = left.first;
        count = left.second-right.second;
    }

    return make_pair(ele,count);
}

int majorityElement(vector<int> &nums){
    return helper(nums,0,nums.size()-1).first;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}