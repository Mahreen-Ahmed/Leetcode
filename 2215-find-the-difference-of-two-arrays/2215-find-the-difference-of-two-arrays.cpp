class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        set <int> s1, s2;
        for(auto i:nums1){
            s1.insert(i);
        }
        for(auto k:nums2){
            s2.insert(k);
        }
        
     vector<vector<int>> ans(2);
        
        for(auto it:s1){
            if(s2.count(it)==0)
                ans[0].push_back(it);
        }
        
        for(auto it:s2){
            if(s1.count(it)==0){
                ans[1].push_back(it);
            }
        }
        
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};