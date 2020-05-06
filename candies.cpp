// https://codeforces.com/problemset/problem/1343/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long t;
    cin>>t;
    long long n, x, k;
    bool flag = false;
    while(t--){
        cin>>n;

        for(int k=2; k<30; k++){
            long long val = (1<<k)-1;
            if(n%val == 0){
                cout<<n/val<<endl;
                break;
            }
        }
    }
    return 0;
}