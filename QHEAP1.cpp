// https://www.hackerrank.com/challenges/qheap1/problem
#include<bits/stdc++.h>
using namespace std;

class minHeap{
    public:
        vector<int> a;

        void insert(int data){
            a.push_back(data);
            
            if(a.empty()){
                make_heap(a.begin(),a.end(),greater<int>());
            }
            else{
                push_heap(a.begin(),a.end(),greater<int>());
            }
        }

        void remove(int data){
            for(auto i=a.begin(); i<a.end(); i++){
                if(*i==data){
                    a.erase(i);
                    make_heap(i,a.end(),greater<int>());
                }
            }
        }

        void printMin(){
            cout<<a[0]<<endl;
        }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, temp;
    vector<int> v;  
    cin>>n;

    minHeap mh;

    while(n--){
        cin>>q;
        if(q==1){
            cin>>temp;
            mh.insert(temp);
        }
        if(q==2){
            cin>>temp;
            mh.remove(temp);
        }
        if(q==3){
            mh.printMin();
        }
    }

    return 0;
}