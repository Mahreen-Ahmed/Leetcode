class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        num=set(nums)
        var=1
        while True:
             if var in num:
                var+=1
             else:
                 return var