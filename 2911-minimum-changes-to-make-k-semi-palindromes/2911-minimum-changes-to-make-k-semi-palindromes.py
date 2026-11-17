class Solution:
    def minimumChanges(self, s: str, k: int) -> int:
        n = len(s)
        INF = float('inf')
        cost = [[INF] * n for _ in range(n)]

        for i in range(n):
            for j in range(i + 1, n):
                length = j - i + 1

                for d in range(1, length):
                    if length % d != 0:
                        continue

                    changes = 0
                    m = length // d

                    for r in range(d):
                        for t in range(m // 2):
                            left = i + r + t * d
                            right = i + r + (m - 1 - t) * d

                            if s[left] != s[right]:
                                changes += 1

                    cost[i][j] = min(cost[i][j], changes)
        dp = [[INF] * (k + 1) for _ in range(n + 1)]
        dp[0][0] = 0
        for groups in range(1, k + 1):
            for i in range(2 * groups, n + 1):
                for p in range(2 * (groups - 1), i - 1):
                    dp[i][groups] = min(
                        dp[i][groups],
                        dp[p][groups - 1] + cost[p][i - 1]
                    )
        return dp[n][k]