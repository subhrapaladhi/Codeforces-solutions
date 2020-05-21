// https://www.hackerrank.com/challenges/game-of-two-stacks/problem
#include<bits/stdc++.h>
using namespace std;

int calc(vector<long> a,vector<long> b,long long x){
    long i=0, j=0, count=0, sum=0;

    while(i<a.size() && sum+a[i]<=x){
        sum+=a[i];
        i++;
    }
    count=i;

    while(j<b.size()){
        sum+=b[j];
        j++;

        while(sum>x && i>0){
            i--;
            sum-=a[i];
        }

        if(sum<=x && i+j>count){
            count=i+j;
        } else if(sum>x) {
            break;
        }
    }

    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int g;
    cin>>g;
    long n,m,temp;
    long long x;
    while(g--){
        vector<long> a,b;
        cin>>n>>m>>x;
        while(n--){
            cin>>temp;
            a.push_back(temp);
        }
        while(m--){
            cin>>temp;
            b.push_back(temp);
        }
        cout<<calc(a,b,x)<<endl;
    }
}