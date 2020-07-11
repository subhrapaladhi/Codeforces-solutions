// // https://www.hackerrank.com/challenges/jim-and-the-skyscrapers/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, temp, count=0;
    cin>>n;

    stack<pair<long long,long long>> stk;
    for(long long i=0; i<n; i++){
        cin>>temp;
        while(!stk.empty() && temp>stk.top().first){
            long long c = stk.top().second;
            count += c*(c-1);
            stk.pop();
        }
        if(!stk.empty() && temp==stk.top().first) {
            stk.top().second++;
        } else {
            stk.push({temp,1});
        }
    }
    while(!stk.empty()){
        long long c = stk.top().second;
        stk.pop();
        count += c*(c-1);
    }

    cout<<count;

    return 0;
}