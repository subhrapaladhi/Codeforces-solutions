#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int>& nums){
    if(nums.size()<=1) return {nums};

    vector<vector<int>> res,result;
    vector<int> temp,v;

    for(int i=0; i<nums.size(); i++){
        v = nums;
        v.erase(v.begin()+i);
        res = permute(v);

        for(int j=0; j<res.size(); j++){
            temp = res[j];
            temp.insert(temp.begin(),nums[i]);
            result.push_back(temp);
        }
    }

    return result;
}