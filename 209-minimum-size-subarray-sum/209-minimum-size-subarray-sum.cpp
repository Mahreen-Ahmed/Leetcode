class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int windStart=0, windEnd=0;
        int minLen=INT_MAX;
       
        for(int i=0;i<nums.size();i++){
            
             int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum>=target){
                    minLen= min(minLen, j-i+1);
                    break;
                }
                
            }
            
            
            
            
            
        }
        
        
        
        
        
        
        
        
        return minLen==INT_MAX? 0:minLen;
    }
};