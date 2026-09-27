class Solution {
public:
    string reverseParentheses(string s) {
        while(true){
            int left=-1,right=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]=='('){
                    left=i;
                }
                else if(s[i]==')'){
                    right=i;
                    break;
                }
            }

            if(left==-1){
                break;
            }
            reverse(s.begin()+left+1,s.begin()+right);
            s.erase(right,1);
            s.erase(left,1);
        }
        return s;
    }
};