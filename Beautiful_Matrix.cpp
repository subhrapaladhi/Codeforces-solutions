// https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mat[5][5], temp, x, y, disx, disy;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>temp;
            if(temp==1){
                x = i; 
                y = j;
                break;
            }
        }
        if(temp==1)
            break;
    }

    disx = abs(x-2);    
    disy = abs(y-2);

    cout<<disx+disy;
    return 0;
}