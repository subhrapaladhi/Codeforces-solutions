#include<bits/stdc++.h>
using namespace std;

int getVal(vector<int> &a,int i){
    if(i<0)
        return INT_MIN;
    else if(i>=a.size())
        return INT_MAX;
    return a[i];
}
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
    if(nums1.size()>nums2.size())
        return findMedianSortedArrays(nums2,nums1);
    
    int m = nums1.size(), n = nums2.size();
    int lshort,rshort,llong,rlong;
    int start=0,end=m;
    double ans;

    while(start<=end){
        rshort = (start+end)/2; // mid = rshort
        rlong  = (n+m-2*rshort)/2;
        lshort = rshort-1;
        llong  = rlong-1;

        if(getVal(nums1,lshort)>getVal(nums2,rlong)){
            end = rshort-1;
        } else if(getVal(nums2,llong)>getVal(nums1,rshort)){
            start = rshort+1;
        } else {
            if((n+m)%2==1){
                ans = min(getVal(nums1,rshort),getVal(nums2,rlong));
            } else {
                ans = (max(getVal(nums1,lshort),getVal(nums2,llong)) + min(getVal(nums1,rshort),getVal(nums2,rlong)))/2.0;
            }
            break;
        }
    }

    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}