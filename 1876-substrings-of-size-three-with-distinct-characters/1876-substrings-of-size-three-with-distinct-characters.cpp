class Solution {
public:
    int countGoodSubstrings(string s) {
        int low =0,high = 2,count=0;
        while(high<s.length()){
            if(s[low]!=s[low+1] && s[low]!=s[low+2] && s[low+1]!=s[low+2]){
                count++;
            }
            low++;
            high++;
        }
        return count;
    }
};