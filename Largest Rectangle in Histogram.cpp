// https://leetcode.com/problems/largest-rectangle-in-histogram/

#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    stack<int> pos;
    int maxarea=0, area=0, i=0,tp;
    
    while(i<height.size()) {
        if(pos.empty() || height[pos.top()] <= height[i]){
            pos.push(i);
            i++;
        } else {
            tp = pos.top();
            pos.pop();
            
            if(pos.empty()){
                area = height[tp]*i;    
            } else {
                area = height[tp]*(i-1-pos.top());
            }
            maxarea = max(maxarea,area);
        }
    }
    
    while(!pos.empty()) {
        tp = pos.top();
        pos.pop();

        if(pos.empty()){
            area = height[tp]*i;    
        } else {
            area = height[tp]*(i-1-pos.top());
        }
    }
    
    return maxarea;        
}

int main(){
    vector<int> a{1,8,6,2,5,4,8,3,7};
    cout<<maxArea(a);
    return 0;
}