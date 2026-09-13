class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.length();i++){
            char last = s[0];
            for(int j=1;j<s.length();j++){
                s[j-1]=s[j];
            }
            s[s.length()-1]=last;
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};