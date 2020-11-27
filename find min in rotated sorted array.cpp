#include<bits/stdc++.h>
using namespace std;

void searchMinBinarySearch(vector<int> &nums, int start, int end, int &minval){
    if(start>end)
        return;
    
    int mid = (start+end)/2;
    minval = min(minval,nums[mid]);

    searchMinBinarySearch(nums,mid+1,end,minval);
    searchMinBinarySearch(nums,start,mid-1,minval);

    return;
}

int findMin(vector<int> &nums){
    int start=0, end=nums.size()-1, minval=INT_MAX;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}