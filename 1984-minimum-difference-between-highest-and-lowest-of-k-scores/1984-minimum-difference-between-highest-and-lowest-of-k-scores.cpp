class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int diff=0,min_diff=INT_MAX;
        for(int i=0;i<=nums.size()-k;i++){
            diff=nums[i+k-1]-nums[i];
            min_diff =min(diff,min_diff);
        }
        return min_diff;
    }
};