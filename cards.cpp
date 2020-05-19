// https://codeforces.com/problemset/problem/1220/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<char,int> m;

    int n;
    cin>>n;
    char x;

    while(n--){
        cin>>x;

        if(m.find(x)==m.end()){
            m[x]=1;
        } else {
            m[x]+=1;
        }
    }

    int c = min(min(m['o'],m['n']),m['e']);

    for(int i=0; i<c; i++){
        cout<<1<<" ";
        m['o']--;
        m['n']--;
        m['e']--;
    }

    c = min(min(m['z'],m['e']),min(m['r'],m['o']));

    for(int i=0; i<c; i++){
        cout<<0<<" ";
        m['z']--;
        m['e']--;
        m['r']--;
        m['o']--;
    }

    return 0;
}