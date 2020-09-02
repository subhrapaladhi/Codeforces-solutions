// https://leetcode.com/problems/add-two-numbers/
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        Node *next = next;
    }
};

Node* addTwoNumber(Node *l1, Node *l2){
    Node *l3 = NULL, *p = NULL;
    int rem = 0, sumval;
    while(l1 != NULL && l2 !=NULL){
        sumval = l1->data + l2->data + rem;
        rem = sumval/10;
        if(p == NULL){
            p = new Node(sumval%10);
            l3 = p;
        } else {
            p->next = new Node(sumval%10);
            p = p->next;
        }
        l1 = l1->next;
        l2 = l2->next;
    }

    while(l1 != NULL){
        sumval = l1->data + rem;
        rem = sumval/10;
        p->next = new Node(sumval%10);
        p = p->next;
    }

    while(l2 != NULL){
        sumval = l2->data + rem;
        rem = sumval/10;
        p->next = new Node(sumval%10);
        p = p->next;
    }

    if(rem != 0){
        p->next = new Node(rem);
    }

    return l3;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    return 0;
}