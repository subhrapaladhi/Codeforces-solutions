#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin>>input;

    vector<int> result;

    for(int i=0; i<input.length(); ++i){
        switch(input[i]){
            case '1': result.push_back(1);
                    break;
            case '2': result.push_back(2);
                    break;
            case '3': result.push_back(3);
                    break;
        }
    }

    sort(result.begin(), result.end());

    for(int i=0; i<result.size(); i++){
        if(i!=result.size()-1)
            cout<<result[i]<<"+";
        else
            cout<<result[i];
    }
    cout<<endl;
    return 0;
}