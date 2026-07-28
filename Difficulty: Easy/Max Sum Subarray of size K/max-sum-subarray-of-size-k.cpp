class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int low=0,high=k-1,res=INT_MIN,sum=0;
        for(int i=low;i<=high;i++){
            sum=sum+arr[i];
        }
        while(high<=arr.size()-1){
            res=max(res,sum);
            low++;
            high++;
            if(high==arr.size()){
                break;
            }
            sum=sum-arr[low-1];
            sum=sum+arr[high];
            
        }
        
        return res;
    }
};