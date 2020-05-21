// https://www.hackerrank.com/challenges/waiter/problem?isFullScreen=false
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<long>a,a1,b;
    queue<long> primes;
    long n, q, temp, lastPrime;
    cin>>n>>q;

    for(long i=0; i<n; i++){
        cin>>temp;
        a.push(temp);
    }

    primes.push(2);
    primes.push(3);

    long j = 5;
    for(long i=0; i<q-1; i++){
        while(true){
            bool flag = true;
            for(long k=3; k<=sqrt(j)+1; k+=2){
                if(j%k == 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                primes.push(j);
                j+=2; 
                break;
            } else {
                j+=2;
            }
        }
    }

    for(int i=0; i<q; i++){
        long prime = primes.front();
        primes.pop();
        if(i%2==0){
            while(!a.empty()){
                if(a.top()%prime==0){
                    b.push(a.top());
                } else {
                    a1.push(a.top());
                }
                a.pop();
            }
        }
        else {
            while(!a1.empty()){
                if(a1.top()%prime==0){
                    b.push(a1.top());
                } else {
                    a.push(a1.top());
                }
                a1.pop();
            }
        }
        while(!b.empty()){
            cout<<b.top()<<endl;
            b.pop();
        }
    }

    while(!a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }
    while(!a1.empty()){
        cout<<a1.top()<<endl;
        a1.pop();
    }

    return 0;
}