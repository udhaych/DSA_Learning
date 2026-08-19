class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        for (int high = s.length() - 1; high >= 0; high--) {
            if (s[high] == ' ') {
                continue;
            }

            for (; high >= 0 && s[high] != ' '; high--) {
                count++;
            }

            break;
        }

        return count;
    }
};