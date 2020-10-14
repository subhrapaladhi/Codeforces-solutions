// https://leetcode.com/problems/3sum-closest/
#include<bits/stdc++.h>
using namespace std;

int threeSumCloset(vector<int> arr, int target){
    sort(arr.begin(),arr.end());
    int n,i,j,k,a,b,c,sum,closest;
    n = arr.size();
    closest = arr[0]+arr[1]+arr[2];

    for(i=0; i<n-2; i++){
        a = arr[i];
        j = i+1; k=n-1;

        while(j<k) {
            b = arr[j]; c = arr[k];
            sum = a+b+c;

            if(abs(target-sum)<abs(target-closest)){
                sum = closest;
                if(target==sum){
                    return sum;
                }
            }

            if(target<sum){
                while((j<k) && (c==arr[--k]));
            } else {
                while((j<k) && (b==arr[++j]));
            }
        }
    }

    return closest;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target,temp;
    cin>>n;
    vector<int> arr;
    while(n--){
        cin>>temp;
        arr.push_back(temp);
    }
    cin>>target;

    cout<<threeSumCloset(arr,target);
    return 0;
}