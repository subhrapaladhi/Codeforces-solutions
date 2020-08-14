// https://www.codechef.com/problems/CHRL4
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long n, k, temp;
    cin>>n>>k;
    vector<long> a;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    
    vector<long>::iterator start = a.end()-k-1,last = a.end()-1, temp1;
    
    float sum = log10(a[n-1]);
    
    while(true) {
        temp1 = min_element(start,last);
        sum += log10(*temp1);

        if(start == a.begin()){
            break;
        }
        
        last = temp1-1;
        if(temp1-1-k>a.begin()){
            start = temp1-1-k;
        } else {
            start = a.begin();
        }
    }

    long long temp2 = llround(pow(10,sum))%1000000007;
    cout<<temp2;

    return 0;
}