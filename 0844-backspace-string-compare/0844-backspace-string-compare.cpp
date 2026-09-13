class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int low = s.length()-1,high=t.length()-1;
        int Sskips=0,Tskips=0;
        while(low>=0 || high>=0){
            while(low>=0){
                if(s[low]=='#'){
                    Sskips++;
                    low--;
                }
                else if(Sskips>0){
                    Sskips--;
                    low--;
                }
                else{
                    break;
                }
            }
            while(high>=0){
                if(t[high]=='#'){
                    Tskips++;
                    high--;
                }
                else if(Tskips>0){
                    Tskips--;
                    high--;
                }
                else{
                    break;
                }
            }
            if(low>=0 && high>=0){
                if(s[low]!=t[high]){
                    return false;
                }
            }
            else if(low>=0 || high>=0){
                return false;
            }
            
            
            low--;
            high--;


        }
        return true;
    }
};