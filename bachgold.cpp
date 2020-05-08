// https://codeforces.com/problemset/problem/749/A
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i=2, temp, count=0;

    cin>>n;
    temp=n;
    vector<int> a;
    while(i<=n && temp){
        if(isPrime(i)){
            while(temp-i>=0 && temp-i!=1){
                temp-=i;
                count++;
                a.push_back(i);
            }
        } 
        i++;
    }
    cout<<count<<endl;

    for(auto x = a.begin(); x<a.end(); x++)
        cout<<*x<<" ";

    return 0;
}

bool isPrime(int n){
    if(n==2)
        return true;
    for(int i=2; i<=sqrt(n)+1; i++){
        if(n%i==0)
            return false;
    }
    return true;
}