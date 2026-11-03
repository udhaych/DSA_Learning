class Solution:
    def largestAltitude(self, gain: list[int]) -> int:
        total = 0 
        maximum = 0
        for i in range(len(gain)):
            total += gain[i]
            maximum = max(maximum,total)
        return maximum