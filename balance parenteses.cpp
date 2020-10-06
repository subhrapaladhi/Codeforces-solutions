bool isValid(string s) {
    stack<char> stk;
    char ch;
    
    for(int i=0; i<s.length(); i++){
        ch = s[i];
        
        if(ch=='{' || ch=='[' || ch=='('){
            stk.push(ch);
        } else if((!stk.empty()) && ((ch=='}' && stk.top()=='{') || (ch==']' && stk.top()=='[') || (ch==')' && stk.top()=='('))) {
            stk.pop();
        } else {
            return false;
        }
    }
    
    if(stk.empty()){
        return true;
    } else {
        return false;
    }
}