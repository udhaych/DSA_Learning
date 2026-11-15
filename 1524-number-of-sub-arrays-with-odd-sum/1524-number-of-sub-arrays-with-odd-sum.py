class Solution:
    def numOfSubarrays(self, arr: List[int]) -> int:
        MOD = 10**9 + 7

        odd = 0
        even = 1
        total = 0
        ans = 0

        for num in arr:
            total += num

            if total % 2 == 0:
                ans += odd
                even += 1
            else:
                ans += even
                odd += 1

            ans %= MOD

        return ans