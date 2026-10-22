class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n - i;

            int oddCount = ((left + 1) / 2) * ((right + 1) / 2)
                         + (left / 2) * (right / 2);

            total += arr[i] * oddCount;
        }

        return total;
    }
};