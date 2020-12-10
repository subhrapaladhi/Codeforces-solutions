// https://leetcode.com/problems/koko-eating-bananas/
#include<bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int H){
    long start = 1, end = *max_element(piles.begin(),piles.end());
    long mid, res = end, sum;

    while(start<=end){
        mid = (start+end)/2;
        sum = 0;
        for(auto ele: piles){
            sum += ceil((double)ele/(double)mid);
            if(sum>H) break;
        }

        if(sum<=H){
            res = min(res,mid);
            end = mid-1;
        } else {
            start = mid+1;
        }
    }

    return (int)res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}