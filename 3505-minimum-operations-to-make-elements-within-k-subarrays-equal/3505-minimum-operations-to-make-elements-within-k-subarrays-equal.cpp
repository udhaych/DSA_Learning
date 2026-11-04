
class Solution {
public:
    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();

        multiset<int> low, high;
        long long lowSum = 0, highSum = 0;

        vector<long long> cost;

        auto balance = [&]() {
            while (low.size() > high.size() + 1) {
                int val = *low.rbegin();

                low.erase(low.find(val));
                lowSum -= val;

                high.insert(val);
                highSum += val;
            }

            while (low.size() < high.size()) {
                int val = *high.begin();

                high.erase(high.find(val));
                highSum -= val;

                low.insert(val);
                lowSum += val;
            }
        };
        for (int i = 0; i < n; i++) {

            if (low.empty() || nums[i] <= *low.rbegin()) {
                low.insert(nums[i]);
                lowSum += nums[i];
            } 
            else {
                high.insert(nums[i]);
                highSum += nums[i];
            }
            if (i >= x) {
                int val = nums[i - x];

                auto it = low.find(val);

                if (it != low.end()) {
                    low.erase(it);
                    lowSum -= val;
                } 
                else {
                    auto it2 = high.find(val);
                    high.erase(it2);
                    highSum -= val;
                }
            }

            balance();
            if (i >= x - 1) {
                long long median = *low.rbegin();

                long long operations =
                    median * low.size() - lowSum +
                    highSum - median * high.size();

                cost.push_back(operations);
            }
        }
        int m = cost.size();

        const long long INF = LLONG_MAX / 4;

        vector<vector<long long>> dp(
            m + 1, vector<long long>(k + 1, INF)
        );
        for (int i = 0; i <= m; i++) {
            dp[i][0] = 0;
        }

        for (int i = m - 1; i >= 0; i--) {
            for (int j = 1; j <= k; j++) {
                long long skip = dp[i + 1][j];
                long long take = cost[i] +
                    dp[min(m, i + x)][j - 1];

                dp[i][j] = min(skip, take);
            }
        }

        return dp[0][k];
    }
};
