// https://www.hackerrank.com/challenges/down-to-zero-ii/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 1000001;
    unordered_map<int,int> umap;

    for(int i=0; i<n; i++){
        umap[i] = -1;
    }

    umap[0]=0; umap[1]=1; umap[2]=2; umap[3]=3;

    for(int i=1; i<n; i++){
        if((umap[i]==-1) || (umap[i]>umap[i-1]+1)){
            umap[i] = umap[i-1]+1;
        }

        for(int j=2; j<=i && i*j<n; j++){
            if((umap[i*j]==-1) || (umap[i*j]>umap[i]+1)){
                umap[i*j] = umap[i]+1;
            }
        }
    }

    int q,temp;
    cin>>q;

    for(int i=0; i<q; i++){
        cin>>temp;
        cout<<umap[temp]<<endl;
    }

    return 0;
}