#include<bits/stdc++.h>
using namespace std;

void findRange(vector<int> &nums,int target, int start, int end, int &startLim, int &endLim){
    if(end<start)
        return;

    int mid = (start+end)/2;
    if(nums[mid]==target){
        startLim = min(startLim,mid);
        endLim = max(endLim,mid);
        findRange(nums,target,start,mid-1,startLim,endLim);
        findRange(nums,target,mid+1,start,startLim,endLim);
    } else if(nums[mid]<target){
        findRange(nums,target,mid+1,end,startLim,endLim);
    } else {
        findRange(nums,target,start,mid-1,startLim,endLim);
    }
}

vector<int> searchRange(vector<int> &nums, int target){
    int start=0,end=nums.size()-1,startLim=nums.size(),endLim=-1;
    findRange(nums,target,start,end,startLim,endLim);
    if(endLim==-1)
        return {-1.-1};
    return {startLim,endLim};
}