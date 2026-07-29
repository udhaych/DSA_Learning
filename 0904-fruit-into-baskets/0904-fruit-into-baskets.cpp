class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> freq;

        int low = 0;
        int ans = 0;

        for (int high = 0; high < fruits.size(); high++) {

            // Add current fruit
            freq[fruits[high]]++;

            // More than 2 fruit types
            while (freq.size() > 2) {

                freq[fruits[low]]--;

                if (freq[fruits[low]] == 0)
                    freq.erase(fruits[low]);

                low++;
            }

            // Valid window
            ans = max(ans, high - low + 1);
        }

        return ans;
    }
};