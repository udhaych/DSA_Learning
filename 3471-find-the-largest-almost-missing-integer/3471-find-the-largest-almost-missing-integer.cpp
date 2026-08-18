class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int low=0,high=k-1;
            while(high<nums.size()){
                unordered_set<int>seen;
                for(int i=low;i<=high;i++){
                seen.insert(nums[i]);
                }
                for(int i:seen){
                freq[i]++;
                }
                low++;
                high++;
            }
            int ans=-1;
            for(auto[num,count]:freq){
                if(count==1){
                    ans= max(ans,num);
                }
            }
        
        return ans;
    }
};