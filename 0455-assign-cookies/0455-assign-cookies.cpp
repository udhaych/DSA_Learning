class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int high = 0;
        int count = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        for(int i = 0; i < g.size(); i++) {

            while(high < s.size() && s[high] < g[i]) {
                high++;
            }

            if(high == s.size()) {
                break;
            }

            count++;
            high++;
        }

        return count;
    }
};