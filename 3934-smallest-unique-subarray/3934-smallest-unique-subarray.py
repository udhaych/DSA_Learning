
class Solution:
    def smallestUniqueSubarray(self, nums: list[int]) -> int:
        n = len(nums)

        MOD1 = 1_000_000_007
        MOD2 = 1_000_000_009
        BASE = 911_382_323

        def exists_unique(length: int) -> bool:
            power1 = pow(BASE, length - 1, MOD1)
            power2 = pow(BASE, length - 1, MOD2)

            h1 = 0
            h2 = 0
            for i in range(length):
                h1 = (h1 * BASE + nums[i]) % MOD1
                h2 = (h2 * BASE + nums[i]) % MOD2
            key = h1 * MOD2 + h2

            freq = {key: 1}
            unique_count = 1
            for right in range(length, n):
                left = right - length
                h1 = (
                    (h1 - nums[left] * power1) * BASE
                    + nums[right]
                ) % MOD1

                h2 = (
                    (h2 - nums[left] * power2) * BASE
                    + nums[right]
                ) % MOD2

                key = h1 * MOD2 + h2

                count = freq.get(key, 0)

                if count == 0:
                    freq[key] = 1
                    unique_count += 1

                elif count == 1:
                    freq[key] = 2
                    unique_count -= 1

            return unique_count > 0
        left = 1
        right = n
        answer = n

        while left <= right:
            mid = (left + right) // 2

            if exists_unique(mid):
                answer = mid
                right = mid - 1
            else:
                left = mid + 1

        return answer
