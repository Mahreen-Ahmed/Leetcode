class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if ( nums.size() == 0) {
return 0;
}
int pos = 0, count = 1;
for (int i = 0; i < nums.size(); i++) {
if (nums[pos] == nums[i]) {
nums[pos] = nums[i];
} else {
pos++;
nums[pos] = nums[i];
count++;
}
}
return count;
       
    }
};