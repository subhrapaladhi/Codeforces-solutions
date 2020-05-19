// https://codeforces.com/problemset/problem/160/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp,sum=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    sort(a,a+n,greater<int>());
    int sum2=0, i=0;
    while(sum2<=sum && i<n){
        sum2+=a[i];
        sum -=a[i];
        i++;
    }

    cout<<i;

    return 0;
}