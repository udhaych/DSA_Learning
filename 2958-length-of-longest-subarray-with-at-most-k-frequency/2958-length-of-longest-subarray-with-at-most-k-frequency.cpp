class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int high=0,low=0,count=0,min_len=INT_MIN;
        unordered_map<int,int>freq;
        for(int high=0;high<nums.size();high++){
            freq[nums[high]]++;
            while(freq[nums[high]]>k){
                freq[nums[low]]--;
                low++;
            }
            int len=high-low+1;
            if(min_len<len){
                min_len=len;
            }
            

        }
        return min_len;
    }
};