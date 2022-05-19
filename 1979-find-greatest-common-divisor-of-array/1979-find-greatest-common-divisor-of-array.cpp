class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max_number=nums[0], min_number=nums[0];
        for(int i=0;i<nums.size();i++){
            max_number= max(max_number,nums[i]);
                 min_number= min(min_number,nums[i]);
        }
        int greatestCommonDivisor=1;
        for(int i=2;i< min_number+1;i++){
            if(max_number%i==0 && min_number%i==0){
                greatestCommonDivisor=i;
               
            }
        }
        return greatestCommonDivisor;
    }
    
};