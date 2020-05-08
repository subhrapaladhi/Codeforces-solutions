// https://codeforces.com/problemset/problem/1351/B
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,a1,b1,a2,b2;

    cin>>t;

    while(t--){
        cin>>a1>>b1;
        cin>>a2>>b2;
        
        bool flag = false; 
        if(a1==a2){
            if(b1+b2==a1)
                flag = true;
            else if(b1==b2 && a1+a2 == b1)
                flag = true;
        } else if( b1 == b2 && a1+a2 == b1) {
            flag = true;
        } else if( a1 == b2) {
            if(a2+b1 == a1)
                flag = true;
            else if(a2 == b1 && a1+b2 == a2)
                flag = true;
        } else if(a2==b1 && a1+b2 == a2) {
                flag = true;
        }
        
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}