#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(int j=0; j<t; ++j){
        long long n;
        cin>>n;

        if((n/2)%2 != 0){
            cout<<"NO"<<endl;
        } else {
            long long a[n];
            a[0] = 2;
            a[n/2] = 3;
            for(int i=1; i<n/2; i++){
                if(i%2==1){
                    a[i] = a[i-1]+4;
                    a[n/2 +i] = a[n/2 + i-1]+2;  
                } else{
                    a[i] = a[i-1]+2;
                    a[n/2 +i] = a[n/2 +i-1]+4;
                }
            }
            cout<<"YES\n";
            for(int i=0; i<n; i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}