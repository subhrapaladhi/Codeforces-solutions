#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    long long n,m, mul;
    while(t--){
        cin>>n>>m;
        if(n*m<=m+n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;   
}