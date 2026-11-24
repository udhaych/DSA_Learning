class Solution:
    def maxLength(self, nums: List[int]) -> int:
        n = len(nums)
        ans = 0

        for i in range(n):
            prod = 1
            gcd_val = 0
            lcm_val = 1

            for j in range(i, n):
                prod *= nums[j]
                gcd_val = gcd(gcd_val, nums[j])
                lcm_val = lcm(lcm_val, nums[j])

                if prod == gcd_val * lcm_val:
                    ans = max(ans, j - i + 1)

        return ans