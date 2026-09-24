class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count =0;
        string s = to_string(num);
        for(int i=0;i<=s.size()-k;i++){
            string part = s.substr(i,k);       // to take k digits from (i)th position
            int divisor = stoi(part);
            if(divisor!=0 && num%divisor==0){
                count++;
            }
        }
        return count;
    }
};