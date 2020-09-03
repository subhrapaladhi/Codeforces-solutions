#include<bits/stdc++.h>
using namespace std;

int getMax(vector<int>& a){
    int maxsum = a[0], cursum = 0;

    for(int i=0; i<a.size(); i++){
        if(cursum<0){
            cursum = 0;
        }

        cursum += a[i];

        maxsum = max(maxsum,cursum);
    }

    return maxsum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<getMax(a);

    return 0;    
}