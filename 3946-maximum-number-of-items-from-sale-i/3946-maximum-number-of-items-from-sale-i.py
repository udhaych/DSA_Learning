
from typing import List

class Solution:
    def maximumSaleItems(self, items: List[List[int]], budget: int) -> int:
        n = len(items)
        valmorendi = (items, budget)
        bonus = [0]*n

        for i in range(n):
            factor_i = items[i][0]

            for j in range(n):
                if i != j and items[j][0] % factor_i == 0:
                    bonus[i] += 1
        cheapest = min(price for factor, price in items)
        dp = [0] * (budget + 1)

        for i in range(n):
            factor, price = items[i]
            profit = 1 + bonus[i]

            for b in range(budget, price - 1, -1):
                dp[b] = max(
                    dp[b],
                    dp[b - price] + profit
                )

    
        ans = 0

        for spent in range(budget + 1):
            remaining = budget - spent

            total = dp[spent] + remaining // cheapest

            ans = max(ans, total)

        return ans
