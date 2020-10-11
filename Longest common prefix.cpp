#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int m,n,j=0;

    if(strs.size() == 0)
        return "";

    m = strs.size() - 1;
    sort(strs.begin(),strs.end());
    n = min(strs[0].length(),strs[m].length());

    while(j<n){
        if(strs[0][j] == strs[m][j])
            j++;
        else
            break;
    }

    return strs[0].substr(0,j);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> strarr;
    string str;
    int n;

    cin>>n;    
    
    while(n--){
        cin>>str;
        strarr.push_back(str);
    }
    
    cout<<longestCommonPrefix(strarr);

    return 0;
}