class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance =0 , ans =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                balance++;
            }
            else if(s[i]==')'){
                if(balance>0){
                    balance--;
                }
                else{
                    ans++;
                }
            }
        }
        if(balance>0){
            ans=ans+balance;
        }
        return ans;
    }
};