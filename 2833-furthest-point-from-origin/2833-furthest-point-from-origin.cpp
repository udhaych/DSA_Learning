class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,blanks=0;
        for(char c:moves){
            if(c=='L'){
                l++;
            }
            else if(c=='R'){
                r++;
            }
            else{
                blanks++;
            }
        }
        int result = abs(r-l)+blanks;
        return result;
    }
};