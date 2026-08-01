class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0,res=INT_MIN;
        int arr[256]={};
        int diff=0;
        int max_count=0;
        for(int high=0;high<s.size();high++){
            arr[s[high]]++;
            max_count=max(max_count,arr[s[high]]);
            int len=high-low+1;
            diff=len-max_count;
            while(diff>k){
                arr[s[low]]--;
                low++;
                len=high-low+1;
                diff=len-max_count;
            }
            res=max(res,len);
     
        }
        return res;
    }

};