#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,temp1,temp2;
    vector<pair<int,int>> nodes;
    cin>>n;

    while(n--){
        cin>>temp1>>temp2;
        pair<int,int> p = {1,2};
        nodes.push_back({temp1,temp2});
    }

    bool first = true;
    int fuel = 0, start=0, i=0, j;
    if(nodes.size()==1){
        cout<<1;
        return 0;
    }
    while(true){
        j = (start+i)%nodes.size();
        
        if(first==false && j==start){
            cout<<start;
            break;
        }
        first = false;
        pair<int,int> node = nodes[j];
        fuel+=node.first;
        if(fuel>=node.second){
            fuel-=node.second;
            i++;
        }   
        else{
            i=0;
            start=j+1;
            first=true;
            fuel = 0;
        }
    }

    return 0;
}

// 3
// 1 5
// 10 3
// 3 4