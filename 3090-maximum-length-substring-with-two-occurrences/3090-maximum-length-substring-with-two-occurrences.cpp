class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>freq;
        int low=0,max=INT_MIN;
        for(int high=0;high<s.size();high++){
            freq[s[high]]++;
            while(freq[s[high]]>2){
                freq[s[low]]--;
                low++;
            }
            int len=high-low+1;
            if(max<len){
                max=len;
            }
        }
        return max;
    }
};