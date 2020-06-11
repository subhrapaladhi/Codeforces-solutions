// https://www.hackerrank.com/challenges/down-to-zero-ii/problem?isFullScreen=false
#include<bits/stdc++.h>
using namespace std;

int countMoves(int n){
    int moves = 0;
    
    if(n<=3){
        return n;
    }
    if(n%2==0){
        moves+=countMoves(n/2)+1;
    }
    else{
        moves+=countMoves(n-1)+1;
    }
    cout<<"moves = "<<moves<<endl;
    return moves;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q,n;
    cin>>q;

    while(q--){
        cin>>n;
        cout<<countMoves(n)<<endl;
    }

    return 0;
}
