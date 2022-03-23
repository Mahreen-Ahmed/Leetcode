class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
     unsigned long int rev=0;
        int n=x,  digit=0;
        while(n!=0){
            digit=n%10;
            rev=(rev*10)+digit;
            n=n/10;
            
        }
        if(rev==x)
            return true;
        return false;
        
    }
};