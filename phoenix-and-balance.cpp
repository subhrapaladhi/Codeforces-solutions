// https://codeforces.com/problemset/problem/1348/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        long long a=0, b=0;
        for(int i=n/2; i<=n-1; i++)
           a+=pow(2,i); 

        b = pow(2,n);

        for(int i=1; i<n/2; i++)
            b+=pow(2,i);

        cout<<abs(a-b)<<endl;
    }

    return 0;
}