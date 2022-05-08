class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count_bits=0;
        while(n!=0){
            if(n&1){
                count_bits+=1;
            }
            n=n>>1;
        }
        return count_bits;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};