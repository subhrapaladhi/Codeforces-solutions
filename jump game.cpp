// https://leetcode.com/problems/jump-game/
#include<bits/stdc++.h>
using namespace std;

// approach 1
bool canJump(vector<int>& nums){
    int reach=0;
    for(int i=0; i<nums.size();i++){
        if(reach<i) return false;
        reach = max(reach,nums[i]+i);
        if(reach>=nums.size()-1) return true;
    }
    return false;
}

// approach 2
bool canJump(vector<int>& nums){
    int n=nums.size(),j;
    vector<int>::iterator minpos,itr;
    for(int i=0; i<n-1; i++){
        minpos = min_element(nums.begin()+i,nums.end()-1);

        if(*minpos!=0) return true;
        else{
            j=2; itr=minpos-1;
            while(itr>=nums.begin()){
                if(*itr>=j) break;
                itr--; j++;
            }
            if(itr<nums.begin()) return false;
        }
    }
    return true;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}