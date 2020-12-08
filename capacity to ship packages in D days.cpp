// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
#include<bits/stdc++.h>
using namespace std;

bool compute(vector<int> &weights, int D, int mid){
    int n = weights.size(), cnt=1, sum=0;

    for(int i=0; i<n; i++){
        if(weights[i]>mid)
            return false;
        sum+=weights[i];
        if(sum>mid){
            cnt++;
            sum = weights[i];
        }
    }

    if(cnt<=D)
        return true;
    return false;
}

int shipWithinDays(vector<int>& weights, int D){
    int n = weights.size();
    if(D==n)
        return *max_element(weights.begin(),weights.end());

    int start = 0, end = accumulate(weights.begin(),weights.end()), mid, result;

    while(start<=end){
        mid = (start+end)/2;

        if(compute(weights,D,mid)){
            result = mid;
            end = mid-1;
        } else {
            start = mid+1;
        }
    }

    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}