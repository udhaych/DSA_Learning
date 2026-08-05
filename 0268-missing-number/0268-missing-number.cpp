class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actual_sum=(nums.size()*(nums.size()+1))/2;
        int sum_got=0;
        for(int i=0;i<nums.size();i++){
            sum_got=sum_got+nums[i];
        }
        int diff= actual_sum-sum_got;
        return diff;
    }
};