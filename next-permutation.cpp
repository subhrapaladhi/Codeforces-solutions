// https://leetcode.com/problems/next-permutation/
#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &a, int n){
    int i = n-2, j = n-1;
    bool found = false;
    while(i>=0){
        if(a[i]<a[j]){
            for(int k=n-1; k>=j; k--){
                if(a[i]<a[k]){
                    swap(a[i],a[k]);
                    reverse(a.begin()+j,a.end());
                    found = true;
                    break;
                }
            }
            break;
        } else if(a[i]>a[j]){
            j = i;
        }
        i--;
    }

    if(!found){
        sort(a.begin(),a.end());
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,temp;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }

    nextPermutation(a,n);

    for(int i=0; i<n; i++)
        cout<<a[i]<<",";

    return 0;
}