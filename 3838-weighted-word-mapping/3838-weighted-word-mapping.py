class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        answer=""
        for word in words:
            total = 0
            for c in word:
                index = ord(c) - ord('a')
                total+=weights[index]
            result = total % 26
            character = chr(ord('z')-result)
            answer+=character
        
        return answer
