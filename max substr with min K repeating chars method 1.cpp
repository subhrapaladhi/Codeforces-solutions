// https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
#include<bits/stdc++.h>
using namespace std;

int compute(string s, int &k, int &maxlen, unordered_map<string,int> &um){
    int n = s.size();
    if((n==0) || (k>n) || (n<maxlen)) return um[s] = maxlen;
    if(um.count(s)) return um[s];

    vector<int> charCount(26,0);
    for(auto c: s) charCount[c-'a']++;

    int i=0;
    while((i<n) && (charCount[s[i]-'a']>=k)) i++;

    if(i==n) return um[s] = n;

    int left  = compute(s.substr(0,i),k,maxlen,um);
    int right = compute(s.substr(i+1),k,maxlen,um);
    int tempmax = max(left,right);
    maxlen = max(tempmax,maxlen);

    return um[s] = maxlen;
}

int longestSubstring(string s, int k){
    unordered_map<string,int> um;
    int maxlen = 0;
    maxlen = compute(s,k,maxlen,um);
    return maxlen;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}