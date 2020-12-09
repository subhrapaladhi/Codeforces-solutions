// https://leetcode.com/problems/find-k-closest-elements/
#include<bits/stdc++.h>
using namespace std;

int findIndex(vector<int> &arr, int x){
    int left=0, right = arr.size()-1, mid;

    while(left<right){
        mid = (left+right)/2;

        if(arr[mid]==x){
            return mid;
        } else if(arr[mid]<x) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    return left;
}

int val(vector<int> &arr, int pos){
    if(pos<0 || pos>=arr.size())
        return INT_MAX;
    return arr[pos];
}

vector<int> findClosestElements(vector<int>& arr, int k, int x){
    int r = findIndex(arr,x);
    int l = r-1, len=0;
    long leftval, rightval, leftdiff, rightdiff;

    vector<int> result;

    while(len<k){
        leftval     = val(arr,l);
        rightval    = val(arr,r);
        leftdiff    = abs(x-leftval);
        rightdiff   = abs(x-rightval);

        if(leftdiff<=rightdiff){
            result.push_back((int)leftval);
            l--;
        } else {
            result.push_back((int)rightval);
            r++;
        }
    }

    sort(result.begin(),result.end());
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}