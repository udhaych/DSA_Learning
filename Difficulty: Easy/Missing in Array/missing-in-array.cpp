class Solution {
  public:
    int missingNum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr[0]!=1){
            return 1;
        }
        int low=0,high=arr.size()-1;
        for(int i=0;i<arr.size()-1;i++){
            int diff=arr[i+1]-arr[i];
            if(diff>1){
                return arr[i]+1;
                
            }
        }
        return arr[arr.size()-1]+1;
        
    }
};