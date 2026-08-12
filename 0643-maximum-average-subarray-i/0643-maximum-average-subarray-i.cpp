class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        double sum = 0;
        double maxAvg = numeric_limits<double>::lowest();

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (i >= k - 1) {
                double avg = sum / k;

                if (avg > maxAvg) {
                    maxAvg = avg;
                }

                sum -= nums[low];
                low++;
            }
        }

        return maxAvg;
    }
};