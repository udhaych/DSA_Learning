class Solution {
public:
    string longestNiceSubstring(string s) {
        int n = s.size();
        int bestStart = 0;
        int bestLen = 0;

        for (int i = 0; i < n; i++) {
            int lower = 0;
            int upper = 0;

            for (int j = i; j < n; j++) {
                if (islower(s[j]))
                    lower |= (1 << (s[j] - 'a'));
                else
                    upper |= (1 << (s[j] - 'A'));

                if (lower == upper && j - i + 1 > bestLen) {
                    bestStart = i;
                    bestLen = j - i + 1;
                }
            }
        }

        return s.substr(bestStart, bestLen);
    }
};