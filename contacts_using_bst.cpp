// https://www.hackerrank.com/challenges/contacts/problem
#include<bits/stdc++.h>
using namespace std;

class Contact{
    public:
        string name;
        Contact *left, *right;

        Contact(string name){
            this->name = name;
            left=right=NULL;
        }

        Contact* addContact(string name, Contact *root){
            if(!root){
                return new Contact(name);
            }

            if(name < root->name){
                root->left = addContact(name,root->left);
            }

            else {
                root->right = addContact(name,root->right);
            }

            return root;
        }

        int searchContact(string name, Contact *root, int count=0){
            if(!root){
                return count;
            }

            if(name>root->name){
                count = root->searchContact(name,root->right,count);
            }

            else if(name==root->name){
                count++;
                count = root->searchContact(name,root->right,count);
            }

            else if(name<root->name){
                if(root->name.find(name)!=string::npos) {
                    count++;
                }
                count = root->searchContact(name,root->left,count);
                count = root->searchContact(name,root->right,count);
            }

            return count;
        }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n; 
    string a,b;
    
    Contact *contactTree;
    
    while(n--){
        cin>>a>>b;

        if(a=="add"){
            contactTree = contactTree->addContact(b, contactTree);
        }

        else {
            int count = contactTree->searchContact(b, contactTree);
            cout<<count<<endl;
        }
    }

    return 0;
}