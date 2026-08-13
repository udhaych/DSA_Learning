class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0,lng=0;
        for(int high=0;high<nums.size();high++){
            int diff=nums[high]-nums[low];
            while(diff>1){
                low++;
                diff=nums[high]-nums[low];
            }
            if(diff==1){
            int len=high-low+1;
            if(len>lng){
                lng=len;
            }
            }
            
        }
        return lng;
    }
};