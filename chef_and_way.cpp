// https://www.codechef.com/problems/CHRL4
#include<bits/stdc++.h>
using namespace std;

long long compute(
    vector<long> a, 
    long n, 
    long long prod, 
    unordered_map<string,long long> dp, 
    long x, 
    long y
){
 
    if(y==n){
        return prod*y;
    }
    string query = to_string(prod)+"*"+to_string(y);

    if(dp.find(query) != dp.end()){
        long long res = dp.at(query);
        res = y*res;
        
        compute(a,n,prod,dp,y,)
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long n, k, temp; 
    cin>>n>>k;
    vector<long> a;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    unordered_map<string,long long> dp;
    long x=1,y=2;
    long long prod=1;
    if(n==1){
        cout<<1;
    } else {
        for(long i=0; i<n; i++){
            x=i;
            for(int j=i+1; j<i+k && j<n; i++){
                y=j;
                if(y-x<=k && y-x>=1){
                    prod = min(prod,compute(a,n,1,dp,x,y));
                }
            }
        }
    }
    return 0;
}