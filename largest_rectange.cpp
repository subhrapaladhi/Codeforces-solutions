// https://www.hackerrank.com/challenges/largest-rectangle/problem
#include<bits/stdc++.h>
using namespace std;

int calcArea(vector<int> a){
    int maxarea=0, i;
    stack<int> stk;
    for(i=0; i<a.size(); i++){
        if(stk.empty() || a[stk.top()]<=a[i]){
            stk.push(i);
        } 
        else {
            int top = stk.top();                
            while(!stk.empty() && a[top]>a[i]){
                int val;
                top = stk.top();
                stk.pop();
                if(stk.empty()){
                    val = a[top]*i;
                }
                else {
                    int newtop = stk.top();
                    val = a[top]*(i-newtop-1);
                }
                if(val>maxarea){
                    maxarea = val;
                }
            }
            stk.push(i);
        }
    }

    while(!stk.empty()){
        int top = stk.top();
        stk.pop();
        int val;
        if(stk.empty()){
            val = (a[top])*i;
        }
        else {
            int newtop = stk.top();
            val = a[top]*(i-newtop-1);
        }
        if(val>maxarea){
            maxarea = val;
        }
    }

    return maxarea;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,temp;
    cin>>n;
    vector<int> a;
    while(n--){
        cin>>temp;
        a.push_back(temp);
    }

    cout<<calcArea(a);
    return 0;
}