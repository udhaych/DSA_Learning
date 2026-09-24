class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ind = INT_MAX, d=0;
        for(int i=0;i<nums.size();i++){
            int n = nums[i],sum=0;
            while(n>0){
                int digit = n%10;
                sum+=digit;
                n/=10;
            }
            if(sum==i){
                return sum;
            }
        }
        return -1;
    }
};