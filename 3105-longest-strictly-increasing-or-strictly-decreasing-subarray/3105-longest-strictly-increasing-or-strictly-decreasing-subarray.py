class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        inc = 1
        dec = 1
        ans = 1
        for i in range(len(nums)-1):
            if nums[i+1]>nums[i]:
                inc = inc+1
                dec=1
            elif nums[i+1]<nums[i]:
                dec=dec+1
                inc=1
            else:
                dec = 1
                inc = 1
            ans = max(ans,inc,dec)
        return ans