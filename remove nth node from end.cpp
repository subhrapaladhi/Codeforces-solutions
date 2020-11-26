// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int val;
      Node *next;

      Node(){
          val=0;
          next=NULL;
      }
};

Node* removeNthFromEnd(Node *head,int n){
    Node *p=head,*r,*prev;
    vector<Node*> arr;

    while(p!=NULL){
        arr.push_back(p);
        p = p->next;
    }

    int len = arr.size();

    if(n==len){
        r = head;
        head = head->next;
        delete r;
    } else {
        r = arr[len-n];
        prev = arr[len-n-1];
        prev = r->next;
        delete r;
    }

    return head;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}