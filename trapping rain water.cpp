// https://leetcode.com/problems/trapping-rain-water/

#include<bits/stdc++.h>
using namespace std;

int trap(vector<int> height){
    int n = height.size(), total = 0;
    vector<int> forward(n), backward(n);

    if(n<=2){
        return 0;
    }

    forward[0] = height[0];
    for(int i=1; i<n; i++){
        forward[i] = max(height[i],forward[i-1]);
    }

    backward[n-1] = height[n-1];
    for(int i=n-2; i>=0; i--){
        backward[i] = max(height[i],backward[i+1]);
    }

    for(int i=0; i<n; i++){
        total += min(forward[i],backward[i])-height[i];
    }

    return total;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> height;
    cout<<trap(height);

    return 0;
}