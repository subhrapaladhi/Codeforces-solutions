// https://leetcode.com/problems/first-bad-version/
#include<bits/stdc++.h>
using namespace std;

void compute(long left, long right, long &minbad){
    long mid;

    if(left<=right){
        mid = (left+right)/2;
        
        if(isBadVersion(mid)){
            minbad = min(mid,minbad);
            compute(left,mid-1,minbad);
        } else {
            compute(mid+1,right,minbad);
        }
    }

    return ;
}

int firstBadVersion(int n){
    long left = 0, right = n, minbad = INT_MAX;

    compute(left,right,minbad);

    return (int)minbad;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}