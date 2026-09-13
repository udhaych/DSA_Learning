class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int>map;
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        for(char c:s1){
            map[c]=1;
        }
        for(char d:s2){
            map[d]=2;
        }
        for(char e:s3){
            map[e]=3;
        }
        vector<string>result;
        for(int i=0;i<words.size();i++){
            int row =map[tolower(words[i][0])];
            bool test = true;
            for(int j=0;j<words[i].size();j++){
                if(map[tolower(words[i][j])] != row){
                    test = false;
                    break;
                }
            }
            if(test){
                result.push_back(words[i]);
            }
        }
        return result;
    }
};