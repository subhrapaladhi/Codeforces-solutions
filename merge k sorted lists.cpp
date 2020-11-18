// https://leetcode.com/problems/merge-k-sorted-lists/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int val;
     Node *next;

     Node(int val){
        this->val = val;
        this->next = NULL;
     }
};

Node* merge2Lists(Node *l1, Node *l2){
    Node *head=NULL, *p=NULL;
    int minval;

    while(l1!=NULL && l2!=NULL){
        minval = min(l1->val, l2->val);
        if(head == NULL){
            p = new Node(minval);
            head = p;
        } else {
            p->next = new Node(minval);
            p = p->next;
        }
        l1->val<=l2->val ? l1 = l1->next : l2 = l2->next;
    }

    if(head==NULL){
        return l1!=NULL ? l1:l2;
    } 
    p->next = l1!=NULL ? l1:l2;
    return head;
}

Node* mergeKLists(vector<Node*>& lists){
    if(lists.size() == 0)
        return NULL;
    
    Node *l1, *l2;

    while(lists.size()>1){
        vector<Node*> mergedLists;

        for(int i=0; i<lists.size(); i=i+2){
            l1 = lists[i];
            l2 = i+1<lists.size()? lists[i+1]: NULL;

            mergedLists.push_back(merge2Lists(l1,l2));
        }

        lists = mergedLists;
    }

    return lists[0];
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}