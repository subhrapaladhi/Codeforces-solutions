// https://www.hackerrank.com/challenges/jesse-and-cookies/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,temp,op=0;
    cin>>n>>k;

    priority_queue <int,vector<int>,greater<int>> pq;
    for(int i=0; i<n; i++){
        cin>>temp;
        pq.push(temp);
    }

    while(true){
        if(pq.top()>=k){
            break;
        }
        else if(pq.size()>1){
            int less_sweet1 = pq.top();
            pq.pop();
            int less_sweet2 = pq.top();
            pq.pop();
            int newcookie = 1*less_sweet1+2*less_sweet2;
            pq.push(newcookie);
            op++;
        }
        else {
            op=-1;
            break;
        }
    }
    
    cout<<op;

    return 0;
}