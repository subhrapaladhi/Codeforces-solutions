// https://www.hackerrank.com/challenges/find-maximum-index-product/problem
#include<bits/stdc++.h>
using namespace std;

vector<long long> nextGreatestLeft(vector<long long> a){
    long long n = a.size();
    stack<long long> stk;
    vector<long long> left_index(n);
    
    left_index[0] = 0;
    stk.push(0);

    for(int i=1; i<n; i++){
        while(!stk.empty() && a[i]>=a[stk.top()]){
            stk.pop();
        }
        
        if(stk.empty()){
            left_index[i] = 0;
        } else {
            left_index[i] = stk.top()+1;
        }
        stk.push(i);
    }

    return left_index;
}

vector<long long> nextGreatestRight(vector<long long> a){
    long long n = a.size();
    stack<long long> stk;
    vector<long long> right_index(n);

    right_index[n-1] = 0;
    stk.push(n-1);

    for(int i=n-2; i>=0; i--){
        while(!stk.empty() && a[i]>=a[stk.top()]){
            stk.pop();
        }

        if(stk.empty()){
            right_index[i] = 0;
        } else {
            right_index[i] = stk.top()+1;
        }
        stk.push(i);
    }

    return right_index;
}

long long LRProduct(vector<long long> a){
    long long n = a.size();
    
    vector<long long> left = nextGreatestLeft(a);
    vector<long long> right = nextGreatestRight(a);

    long long maxval=0;
    for(long long i=0; i<n; i++){
        maxval = max(maxval, left[i]*right[i]);
    }
    return maxval;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, temp;
    cin>>n;
    vector<long long> a;

    for(long long i=0; i<n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    cout<<LRProduct(a);

    return 0;
}