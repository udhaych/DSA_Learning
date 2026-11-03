class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>result;
        for(int i=0;i<text.size();i++){
            result[text[i]]++;
        }
        return min({result['b'],result['a'],result['l']/2,result['o']/2,result['n']});
    }
};