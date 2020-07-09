// https://www.hackerrank.com/challenges/find-maximum-index-product/problem
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreatestLeft(vector<int> a){
    stack<int> stk;
    vector<int> left_index(a.size(),0);
    for(int i =a.size()-1; i>=0; i--){
        while(stk.empty() && a[i]>a[stk.top()]){
            int r = stk.top();
            stk.pop();
            left_index[r] = i;
        }
        stk.push(i);
    }
    return left_index;
}

vector<int> nextGreatestRight(vector<int> a){
    stack<int> stk;
    vector<int> right_index(a.size(),0);

    for(int i=0; i<a.size(); i++){
        while(stk.empty() && a[i]>a[stk.top()]){
            int l = stk.top();
            stk.pop();
            right_index[l] = i;
        }
        stk.push(i);
    }
    return right_index;
}

int LRProduct(vector<int> a){
    vector<int> left = nextGreatestLeft(a);
    vector<int> right = nextGreatestLeft(a);
    int maxval=-1;
    for(int i=0; i<a.size(); i++){
        maxval = max(maxval, left[i]*right[i]);
    }

    return maxval;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, temp;
    cin>>n;
    vector<int> a;

    for(int i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }

    cout<<LRProduct(a);

    return 0;
}