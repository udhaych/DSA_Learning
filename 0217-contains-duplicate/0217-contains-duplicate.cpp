class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0,high=1;
        while(high<nums.size()){
            if(nums[low]==nums[high]){
                return true;
            }
            low++;
            high++;
        }

        return false;
    }
};