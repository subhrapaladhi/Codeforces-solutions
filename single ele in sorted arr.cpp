// https://leetcode.com/problems/single-element-in-a-sorted-array/
#include<bits/stdc++.h>
using namespace std;

bool checkLeft(vector<int> &nums, int &n, int &mid){
    if(mid==0) return false;
    return (nums[mid-1]==nums[mid]);
}

bool checkRight(vector<int> &nums, int &n, int &mid){
    if(mid==n-1) return false;
    return (nums[mid]==nums[mid+1]);
}

int singleNonDuplicate(vector<int>& nums){
    int n = nums.size();
    int start = 0, end = n-1, mid, mid_l, mid_r;

    while(start<end){
        mid = (start+end)/2;

        if(checkLeft(nums,n,mid)){
            mid_l = mid-1;
            mid_r = mid;
        } else if(checkRight(nums,n,mid)) {
            mid_l = mid;
            mid_r = mid+1;
        } else {
            return nums[mid];
        }

        (mid_l-start)%2==0 ? start = mid_r+1 : end = mid_l-1;
    }

    return nums[start];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}