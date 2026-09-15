class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxending = nums[0];
        int minending = nums[0];
        int ans = abs(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            int v1 = maxending + nums[i];
            int v2 = minending + nums[i];

            maxending = max(nums[i], max(v1, v2));
            minending = min(nums[i], min(v1, v2));

            ans = max(ans, max(abs(maxending), abs(minending)));
        }

        return ans;
    }
};