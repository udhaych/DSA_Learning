class Solution:
    def processStr(self, s: str) -> str:
        result = []
        for i in range(len(s)):
            if s[i].islower():
                result.append(s[i])
            if s[i] == '*':
                if result:
                    result.pop()
            if s[i] == '#':
                result = result + result
            if s[i] == '%':
                result.reverse()
        return ''.join(result)