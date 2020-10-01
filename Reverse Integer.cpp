// https://leetcode.com/problems/reverse-integer/

int reverse(int x) {
    try{
                    
        int p=0, num=0;
        
        bool flag = true;
        
        if(x<0)
            flag=false;
        
        while(x!=0){
            if(num > (INT_MAX-(abs(x%10)))/10)
                throw 0;
            num = num*10+abs(x%10);
            x /= 10;
        }
        
        if(!flag)
            num *=-1;
        
        return num;
        
    }catch(int err){
        return err;
    }
        
}