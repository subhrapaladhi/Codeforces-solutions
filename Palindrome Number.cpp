bool isPalindrome(int x){
    if(x<0){
        return false;
    } else {
        int rev = 0, temp = x;

        while(x!=0){
            rev = rev*10 + temp%10;
            temp/=10;
        }

        if(rev == x){
            return true;
        } else {
            return false;
        }
    }
}