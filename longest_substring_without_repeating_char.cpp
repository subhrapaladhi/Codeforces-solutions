// https://leetcode.com/problems/longest-substring-without-repeating-characters/
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s){
    unordered_map<char,int> unqchar;
    int count = 0, max = 0, start = 0, temp;
    char ch;
    for(int i=0; i<s.length(); i++){
        ch = s[i];
        if(unqchar.find(ch) == unqchar.end()){
            unqchar[ch] = i;
            count++;
        } else {
            if(max<count){
                max = count;
            }    
            temp = unqchar[ch];
            for(int j=start; j<=temp; j++){
                unqchar.erase(unqchar.find(s[j]));
            }
            unqchar[ch] = i;
            count = count - (temp-start);
            start = temp+1;
        }
    }
    if(max<count){
        max = count;
    }

    return max;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "abcabcbb";

    cout<<lengthOfLongestSubstring(s);

    return 0;
}