class Solution {
public:
    // Optimised code : 
    int largestAltitude(vector<int>& gain) {
        int sum=0,maximum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            maximum = max(maximum,sum);
        }
        return maximum;
    }
};