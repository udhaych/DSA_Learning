class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int count=0;
        int max=nums.size()-1;
        sort(nums.begin(),nums.end());
        int  min=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[min]){
                min=i;
                count++;
            }
            
            
            if(count==2){
                return nums[min];
            }
            
        }
        return nums[max];
    }
};