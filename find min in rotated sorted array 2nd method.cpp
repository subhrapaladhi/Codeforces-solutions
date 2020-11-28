#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums){
    int start=0,end=nums.size()-1,minval=INT_MAX,mid;

    while(start<=end){
        mid = (start+end)/2;

        if(nums[start]<=nums[mid]){
            minval = min(minval,nums[start]);
            start = mid+1;
        } else {
            minval = min(minval,nums[mid]);
            end = mid-1;
        }
    }

    return minval;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}