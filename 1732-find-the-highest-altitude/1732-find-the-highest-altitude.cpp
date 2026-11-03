class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>result;
        int sum=0;
        result.push_back(0);
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            result.push_back(sum);
        }
        int maximum = *max_element(result.begin(),result.end());
        return maximum;
    }
};