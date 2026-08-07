class Solution {
public:
    int characterReplacement(string s, int k) {
        int arr[256]={};
        int low=0,res=INT_MIN,max_count=0,diff=0;
        for(int high=0;high<s.size();high++){
            arr[s[high]]++;
            max_count=max(arr[s[high]],max_count);
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