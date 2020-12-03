// https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string s, int k){
    int n = s.size(), maxlen=0, start=0, temp;

    vector<int> charCount(26,0);
    for(char c: s) charCount[c-'a']++;

    bool flag = true;

    for(int i=0; i<n; i++){
        if(charCount[s[i]-'a']<k){
            temp = longestSubstring(s.substr(start,i-start),k);
            maxlen = max(maxlen,temp);
            start = i+1;
            flag = false;
        }
    }

    return flag ? n : max(maxlen, longestSubstring(s.substr(start),k));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}