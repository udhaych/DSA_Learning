class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalXOR=0;
        for(int i=0;i<nums.size();i++){
            totalXOR=totalXOR^nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(totalXOR!=0){
                return nums.size();
            }
            else if(totalXOR==0){
                totalXOR=totalXOR-totalXOR^nums[i];
                if(totalXOR!=0){
                    return nums.size()-1;
                }
            }
        }
        return 0;
    }
};