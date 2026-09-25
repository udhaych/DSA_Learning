class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int low=0,onecount=0,zerocount=0,count=0;
        for(int high=0;high<s.size();high++){
            if(s[high]=='1'){
                onecount++;
            }
            else if(s[high]=='0'){
                zerocount++;
            }
            while(onecount > k && zerocount > k){
        
            if(s[low]=='1'){
                onecount--;
            }
            else{
                zerocount--;
            }
            low++;
            }
            count+= high - low +1;
            
        }
        return count;
    }
};