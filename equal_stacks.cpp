// https://www.hackerrank.com/challenges/equal-stacks/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1,n2,n3,temp,h1=0,h2=0,h3=0;
    stack<int>s1,s2,s3,temp1,temp2,temp3;

    cin>>n1>>n2>>n3;

    while(n1--){
        cin>>temp;
        h1+=temp;
        temp1.push(temp);
    }
    while(!temp1.empty()){
        s1.push(temp1.top());
        temp1.pop();
    }

    while(n2--){
        cin>>temp;
        h2+=temp;
        temp2.push(temp);
    }
    while(!temp2.empty()){
        s2.push(temp2.top());
        temp2.pop();
    }

    while(n3--){
        cin>>temp;
        h3+=temp;
        temp3.push(temp);
    }
    while(!temp3.empty()){
        s3.push(temp3.top());
        temp3.pop();
    }

    while((h1>0)&&(h2>0)&&(h3>0)){
        if((h1==h2)&&(h2==h3))
            break;
        if(h1>h2 || h1>h3){
            h1-=s1.top();
            s1.pop();
        }
        if(h2>h1 || h2>h3){
            h2-=s2.top();
            s2.pop();
        }
        if(h3>h2 || h3>h1){
            h3-=s3.top();
            s3.pop();
        }
    }

    if(h1==0 || h2==0 || h3==0)
        cout<<0;
    else 
        cout<<h1;

    return 0;
}