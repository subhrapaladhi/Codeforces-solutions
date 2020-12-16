// https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/
#include<bits/stdc++.h>
using namespace std;

int findLengthOfShortestSubarray(vector<int>& arr){
    int n = arr.size();
    int j=n-1, i=0, res;

    while(j>0 && arr[j-1]<=arr[j]) j--;
    if(j==0) return 0;
    res = j;

    while(j<=n){
        while((i==0 || arr[i-1]<=arr[i]) && (j==n || arr[i]<=arr[j])){
            i++;
            res = min(res,j-i);
        }
        j++;
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}