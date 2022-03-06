class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        
        for(int i=0;i<nums2.size();i++){
           nums1.push_back(nums2[i]);
            
        }
        sort(nums1.begin(),nums1.end());
         int size=nums1.size();
        int mid=size/2;
         
        if(size%2!=0)
          return nums1[mid];
        
        
        
        return (double)(nums1[mid-1]+nums1[mid])/2;
        
         
            
    }   
};