// https://codeforces.com/problemset/problem/785/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    int n, edges = 0;
    cin>>n; 

    for (int i = 0; i <n; i++){
        cin>>s;

        if(s == "Tetrahedron")
            edges+=4;
        else if(s == "Cube")
            edges+=6;
        else if(s == "Octahedron")
            edges+=8;
        else if(s == "Dodecahedron")
            edges+=12;
        else if(s == "Icosahedron")
            edges+=20;
    }

    cout<<edges;    

    return 0;
}
