class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int minimum = *min_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int moves = sum - nums.size()*minimum;
        return moves;
    }
};