class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
       long int rev=0;
       int num=x,digit=0;
        while(num!=0){
            digit=num%10;
            rev=(rev*10)+digit;
            num=num/10;
            
        }
        if(rev==x)
            return true;
        return false;
        
    }
};