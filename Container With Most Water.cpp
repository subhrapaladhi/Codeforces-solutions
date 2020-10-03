// https://leetcode.com/problems/container-with-most-water/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> heights{1,8,6,2,5,4,8,3,7};

    int maxarea=0, area, left=0, right=heights.size()-1;

    while(left<right){
        area = (right-left)*min(heights[right],heights[left]);
        maxarea = max(area, maxarea);
        heights[left]>heights[right] ? right--: left++;
    }

    cout<<maxarea;

    return 0;
}