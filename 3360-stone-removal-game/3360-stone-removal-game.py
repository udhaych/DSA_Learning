
class Solution:
    def canAliceWin(self, n: int) -> bool:
        stones_to_remove = 10
        alice_wins = False

        while n >= stones_to_remove:
            n -= stones_to_remove
            stones_to_remove -= 1
            alice_wins = not alice_wins

        return alice_wins
