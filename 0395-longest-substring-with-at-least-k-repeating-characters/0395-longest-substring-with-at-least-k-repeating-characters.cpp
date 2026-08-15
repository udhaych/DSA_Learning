class Solution {
    string s;
    int k;

    int solve(int l,int r){
        if(l>r) 
        return 0;
        
        unordered_map<char,int> freq;
        
        for(int i=l;i<=r;i++) freq[s[i]]++;
        
        for(int i=l;i<=r;i++){
            if(freq[s[i]]<k)
                return max(solve(l,i-1),solve(i+1,r));
        }
        return r-l+1;
    }

public:
    int longestSubstring(string str,int K){
        s=str;
        k=K;
        return solve(0,s.size()-1);
    }
};