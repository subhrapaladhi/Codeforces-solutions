// https://leetcode.com/problems/search-in-rotated-sorted-array/
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target){
    int n=nums.size();
    int start=0,end=n-1,mid,minidx=0;

    while(start<=end){
        mid = (start+end)/2;

        if(nums[mid]==target) return mid;
        
        if(nums[start]<=nums[mid]){
            if(nums[start]<nums[minidx]) minidx = start;
            start = mid+1;
        } else {
            if(nums[mid]<nums[minidx]) minidx = mid;
            end = mid-1;
        }
    }

    start = minidx; end = n-1;
    while(start<=end){
        mid = (start+end)/2;

        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) start = mid+1;
        else end = mid-1;
    }

    start = 0; end = minidx-1;

    while(start<=end){
        mid = (start+end)/2;

        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) start = mid+1;
        else end = mid-1;
    }

    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}