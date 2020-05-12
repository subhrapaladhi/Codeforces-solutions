#include<bits/stdc++.h>
using namespace std;

long long f(long long n){
    if(n%2==0)
        return 2;

    for(long i=2; i<=sqrt(n)+1; i++){
        if(n%i==0)
            return i;
    }
    return n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long t, n, sum;
    long long k;

    cin>>t;

    while(t--){
        cin>>n>>k;
        while(k--){
            n+=f(n);
        }
        cout<<n<<endl;
    }   

    return 0;
}