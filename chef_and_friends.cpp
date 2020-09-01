// https://www.codechef.com/problems/FRK
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // chef
    set<string> s;
    s.insert("ch");
    s.insert("he");
    s.insert("ef");

    int t, count=0;
    cin>>t;
    string str, substr1;
    while(t--){
        cin>>str;
        
        for(int i=0; i<str.length()-1; i++){
            substr1 = str[i]+str[i+1];
            cout<<substr1<<" ";
            if(s.find(substr1)!=s.end()){
                count++;
                break;
            }
        }
        cout<<endl;
    }

    cout<<count;

    return 0;
}