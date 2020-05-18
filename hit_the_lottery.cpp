// https://codeforces.com/problemset/problem/996/A
#include<bits/stdc++.h>
using namespace std;

int calc(int,int);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    cin>>n;

    int val = calc(n,0);

    cout<<val;
    return 0;
}


int calc(int n, int count){
    if(n==0){
        return count;
    }
    else if(n>=100){
        int temp = n/100;
        count=calc(n-(100*temp),count+temp);
    }
    else if(n>=20){
        int temp = n/20;
        count=calc(n-(20*temp),count+temp);
    }
    else if(n>=10){
        int temp = n/10;
        count=calc(n-(10*temp),count+temp);
    }
    else if(n>=5){
        int temp = n/5;
        count=calc(n-(5*temp),count+temp);
    }
    else if(n>=1){
        int temp = n/1;
        count=calc(n-(1*temp),count+temp);
    }
    return count;
}