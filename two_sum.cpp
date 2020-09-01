// https://leetcode.com/problems/two-sum/
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> a, int target){
    unordered_map<int,int> um;
    int diff;
    for(int i=0; i<a.size(); i++){
        diff = target - a[i];

        if(um.find(diff) != um.end()){
            return {i,um[diff]};
        }
        um[a[i]] = i;
    }

    return {};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>target;
    
    vector<int> ans = twoSum(a,target);

    for(int i; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}