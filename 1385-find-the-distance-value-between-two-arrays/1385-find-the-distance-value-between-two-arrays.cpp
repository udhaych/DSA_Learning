class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int low = 0 , high = 0;
        int count = 0;
        while(low<arr1.size()){
            while(high<arr2.size() && arr2[high] < arr1[low]-d){
                high++;
            }
            if(high==arr2.size() || arr2[high]>arr1[low]+d){
                count++;
            }
            low++;
        }
        return count;
    }
};