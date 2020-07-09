// https://www.hackerrank.com/challenges/array-and-simple-queries/problem
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
        Node* addNode(int data, Node *head){
            if(!head){
                return new Node(data);
            }

            Node *itr = head;

            while(itr->next!=nullptr){
                itr = itr->next;
            }
            
            Node *newNode = new Node(data);
            itr->next = newNode;

            return head;
        }

        Node* shiftBack(Node *head, int start, int end){
            Node *p, *itr1, *itr2;

            p = itr1 = itr2 = head;
            
            while(start--){
                p = itr1;
                itr1 = itr1->next;
            }
            while(end--){
                itr2 = itr2->next;
            }

            if(itr1 != head){
                p->next = itr2->next;
            }
            
            itr2->next = head;

            return itr1;
        }

        Node* shiftFront(Node *head, int start, int end){
            Node *p, *itr1, *itr2, *itr3;
            p = itr1 = itr2 = head;
            
            while(start--){
                p = itr1;
                itr1 = itr1->next;
            }
            while(end--){
                itr2 = itr2->next;
            }

            if(itr1==head){
                head = itr2->next;
            } else {
                p->next = itr2->next;
            }

            itr3 = itr2;
            while(itr3->next != nullptr){
                itr3 = itr3->next;
            }

            itr3->next = itr1;
            itr2->next = nullptr;

            return head;
        }

        void PrintLL(Node* head){
            Node *p, *itr1;
            p = head;
            string s;

            while(p!= nullptr){
                s += to_string(p->data)+ " ";
                itr1 = p;
                p = p->next;
            }
            cout<<head->data - itr1->data<<endl<<s;
        }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, data;
    cin>>n>>m;

    Node *head = nullptr;
    
    for(int i=0; i<n; i++){
        cin>>data;
        head = head->addNode(data, head);
    }

    int q, x, y;

    for(int i=0; i<m; i++){
        cin>>q>>x>>y;

        if(q==1){
            head = head->shiftBack(head, x-1, y-1);
        }
        else{
            head = head->shiftFront(head, x-1, y-1);
        }
    }

    head->PrintLL(head);
    
    return 0;
}