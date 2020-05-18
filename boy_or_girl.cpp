// https://codeforces.com/problemset/problem/236/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<char,int> m;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(m.find(s[i]) == m.end()){
            m[s[i]] = 1;
        }
    }

    int n = m.size();

    if(n%2==0){
        cout<<"CHAT WITH HER!";
    }

    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}