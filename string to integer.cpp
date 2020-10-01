// https://leetcode.com/problems/string-to-integer-atoi/

int myAtoi(string str) {
    char ch;
    int num=0;
    bool start=false,neg = false; 
    
    for(int i=0; i<str.length(); i++){
        ch = str[i];
        
        if(start){
            if(isdigit(ch)){
                if(!neg && num> (INT_MAX - (ch-'0'))/10){
                    return INT_MAX;
                } else if (neg && -1*num<(INT_MIN + (ch-'0'))/10){
                    return INT_MIN;
                } else if (neg && -1*num==(INT_MIN + (ch-'0'))/10){
                    num *=-1;
                    num = num*10 - (ch-'0');
                    return num;
                }
                num = num*10 + (ch-'0');
            } else {
                if(neg)
                    num *=-1;
                return num;
            }
        } else {
            if(ch == ' '){
                continue;
            } else if( ch == '-') {
                neg = true;
                start = true;
            } else if( ch == '+') {
                start = true;
            } else if(isdigit(ch)) {
                num = ch-'0';
                start = true;
            }  else {
                return num;
            }
        }
    }
    
    if(neg)
        num *=-1;
    
    return num;
}