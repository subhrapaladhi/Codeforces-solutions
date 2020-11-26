#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x){
    long left=1,right=x/2,mid;

    while(left<=right){
        mid = (left+right)/2;

        if(mid*mid == x){
            return mid;
        } else if(mid*mid > x) {
            right = mid-1;
        } else {
            left = mid+1;
        }
    }

    return left-1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}