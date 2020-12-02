// https://leetcode.com/problems/find-the-duplicate-number/
#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int idx;
    
    for(int i=0; i<nums.size(); i++){
        idx = abs(nums[i]);
        if(nums[idx] < 0)
            return idx;
        nums[idx] *= -1;
    }

    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}