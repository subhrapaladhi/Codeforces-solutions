// https://codeforces.com/problemset/problem/1345/B
#include<bits/stdc++.h>
using namespace std;

int main(){
    auto val = [](long long h){return (3*h*h + h)/2;};
    int t, count;
    long long n, h;
    cin>>t;
    while(t--){
        cin>>n;
        count=0;
        while(n>=val(1)){
            h=1;
            int temp = val(h);
            while(val(h+1)<=n)
                h++;
            count++;
            n-=val(h);
        }
        cout<<count<<endl;
    }
    return 0;
}