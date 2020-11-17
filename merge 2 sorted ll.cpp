#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;

    Node(){
        this->val = 0;
        this->next = NULL;
    }

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

Node* mergeLists(Node* l1, Node* l2){
    Node *head=NULL, *p3=NULL;
    int minval;

    while(l1!=NULL && l2!=NULL){
        minval = min(l1->val, l2->val);
        if(head==NULL){
            p3 = new Node(minval);
            head=p3;
        } else {
            p3->next = new Node(minval);
            p3 = p3->next;
        }

        if(l1->val<=l2->val){
            l1 = l1->next;
        } else {
            l2 = l2->next;
        }
    }

    if(head==NULL){
        head = l1!=NULL?l1:l2;
    } else {
        p3 = l1!=NULL?l1:l2;
    }

    return head;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}