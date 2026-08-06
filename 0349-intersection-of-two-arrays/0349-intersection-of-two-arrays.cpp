class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int>any;
        any.insert(nums1.begin(),nums1.end());
        for(int j=0;j<nums2.size();j++){
           if (any.find(nums2[j]) != any.end()){
                ans.push_back(nums2[j]);
                any.erase(nums2[j]);
            }
        }
        return ans;
    }
};