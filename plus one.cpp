// https://leetcode.com/problems/plus-one/
#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits){
    int n=digits.size();
    int i=n-1,rem=0;

    do{
        rem = (digits[i]+1)/10;
        digits[i] = (digits[i]+1)%10;
        i--;
    }while((rem!=0) && (i>=0));

    if(rem!=0)
        digits.insert(digits.begin(),rem);

    return digits;
}