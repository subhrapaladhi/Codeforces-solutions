#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, count;
    stack<string> stk;
    cin>>n;
    string cur,temp;
    
    while(n--){
        cin>>q;
        if(q==1){
            cin>>temp;
            stk.push(cur);
            cur+=temp;
            // cout<<"1. "<<cur<<endl;
        }

        if(q==2){
            cin>>count;
            stk.push(cur);
            cur.erase(cur.size()-count);
            // cout<<"2. "<<cur<<endl;
        }
        if(q==3){
            cin>>count;
            cout<<cur[count-1]<<endl;
            // cout<<"3. "<<cur<<endl;
        }
        if(q==4){
            cur = stk.top();
            stk.pop();
            // cout<<"4. "<<cur<<endl;
        }
    }
    
    return 0;
}