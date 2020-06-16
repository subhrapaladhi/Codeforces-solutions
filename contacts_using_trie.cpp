// https://www.hackerrank.com/challenges/contacts/problem
#include<bits/stdc++.h>
using namespace std;

class trieNode {
    public:
        int count;
        map<string,trieNode*> children;

        trieNode(){
            count=0;
        }

        void insertTrieNode(string, trieNode*);
        int prefix_count(string, trieNode*);
};

void trieNode::insertTrieNode(string data, trieNode *root){
    trieNode *current = root;

    for(int i=0; i<data.length(); i++){
        string key = string(1,data[i]);
        trieNode *node = current->children[key];
        if(!node){
            node = new trieNode();
            current->children[key] = node;
        }
        current = node;
        current->count++;
    }
}

int trieNode::prefix_count(string data, trieNode *root){
    trieNode *current = root;

    for(int i=0; i<data.length(); i++){
        string key = string(1,data[i]);
        trieNode *node = current->children[key];
        if(!node){
            return 0;
        }
        current = node;
    }

    return current->count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string q,s;
    int n;

    cin>>n;

    trieNode *root = new trieNode();

    while(n--){
        cin>>q>>s;

        if(q=="add"){
            root->insertTrieNode(s,root);
        }
        else{
            cout<<root->prefix_count(s,root)<<endl;
        }
    }

    return 0;
}