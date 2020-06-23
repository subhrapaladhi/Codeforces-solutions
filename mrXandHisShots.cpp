// https://www.hackerrank.com/challenges/x-and-his-shots/problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m, temp1,temp2;

    cin>>n>>m;
    vector<int> startNodes, endNodes;

    for(int i=0; i<n; i++){
        cin>>temp1>>temp2;
        startNodes.push_back(temp1);
        endNodes.push_back(temp2);
    }

    sort(startNodes.begin(),startNodes.end());
    sort(endNodes.begin(), endNodes.end());

    int sum = 0, count;
    vector<int>::iterator itr1, itr2;
    for(int i=0; i<m; i++){
        cin>>temp1>>temp2;
        itr1 =  upper_bound(startNodes.begin(), startNodes.end(), temp2);
        itr2 =  lower_bound(endNodes.begin(), endNodes.end(), temp1);

        count = n - ((startNodes.end() - itr1) + (itr2 - endNodes.begin()));
        sum += count;
    }
 
    cout<<sum;
    
    return 0;
}