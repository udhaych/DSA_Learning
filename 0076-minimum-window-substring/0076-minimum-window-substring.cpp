class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>required;
        for(int i=0;i<t.size();i++){
            required[t[i]]++;
        }
        int low=0,start=0,min_len=INT_MAX,count=t.size();
        for(int high=0;high<s.size();high++){
            if(required[s[high]]>0){
                count--;
            }
            required[s[high]]--;
            while(count==0){
                if(high-low+1<min_len){
                    min_len=high-low+1;
                    start=low;
                }
                required[s[low]]++;
                if(required[s[low]]>0){
                    count++;
                }
                low++;
            }
        }
        if(min_len==INT_MAX){
            return "";
        }
        return s.substr(start,min_len);
    }
};