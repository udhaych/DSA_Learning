class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.size() == 0){
    return ans;
}
        int low=0,high=1;
        for(int i=0;i<nums.size()-1;i++){
            if((long long)nums[i+1]-nums[i]!=1){
                high=i;
                if(high==low){
                    ans.push_back(to_string(nums[high]));
                }
                else{
                    ans.push_back(to_string(nums[low])+"->"+to_string(nums[high]));
                }

            
            low=i+1;
            
            }
        }
            high=nums.size()-1;
               
                    if(high==low){
                        ans.push_back(to_string(nums[high]));
                    }
                    else{
                        ans.push_back(to_string(nums[low])+"->"+to_string(nums[high]));
                    }
                
            
        
        return ans;
    }
};