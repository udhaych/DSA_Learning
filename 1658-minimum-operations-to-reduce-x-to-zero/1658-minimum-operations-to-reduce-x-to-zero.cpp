class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=0,max_len=INT_MIN;
        for(int i:nums){
            total+=i;
        }
        int target = total - x;
        if(target==0){
            return nums.size();
        }
        int left=0,sum=0;
        for(int high=0;high<nums.size();high++){
            sum+=nums[high];
            while(sum>target && left<=high){
                sum-=nums[left];
                left++;
            }
            if(target==sum){
                max_len = max(max_len,high-left+1);
            }
        }
        if(max_len==INT_MIN){
            return -1;
        }
        int ans = nums.size() - max_len;
        return ans;
    }
};