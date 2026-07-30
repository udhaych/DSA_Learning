class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>freq;
        int low=0,res=0;
        for(int high=0;high<s.size();high++){
            freq[s[high]]++;
            while(freq[s[high]]>1){
                freq[s[low]]--;
                low++;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;

    }
};