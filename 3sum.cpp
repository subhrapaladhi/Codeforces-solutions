// https://leetcode.com/problems/3sum/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> arr){
    sort(arr.begin(),arr.end());
    int n,i,j,k,a,b,c;
    n = arr.size();
    vector<vector<int>> triplets;
    for(i=0; i<n-2; i++){
        a = arr[i];

        // As the array is sorted so if a>0 and rest of the a,b,c that we will encounter
        // will also be >0 so break;
        if(a>0)
            break;
        // as we need unique triplets so move continue till previous element is repeated 
        // as all possible results for it already computed
        if(i>0 && arr[i-1]==arr[i])
            continue;
        
        j = i+1; k = n-1;

        while(j<k){
            b = arr[j];
            c = arr[k];
            if((a+b+c)==0) {
                triplets.push_back({a,b,c});

                // after saving for the given b and c; move ahead till we find a unique b and c
                // So ++j till the same elements as b are repeated
                while((j<k) && (b==arr[++j]));
                // So --k till the same elements as c are repeated
                while((j<k) && (c==arr[--k]));
                // WARNING: Do pre increment not post increment as doing post increment 
                // will skip the next unique element.
            } else if((a+b+c)<0) {
                j++;
            } else {
                k--;
            }
        }
    }

    return triplets;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp;
    cin>>n;
    vector<int> arr;
    
    while(n--){
        cin>>temp;
        arr.push_back(temp);
    }

    vector<vector<int>> triplets = threeSum(arr);
    return 0
}