class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
          int n=arr.size();
        int sub=0,maxi=INT_MIN;
            for(int i=0;i<n;i++){
                 sub += arr[i];
                 maxi=max(sub,maxi);
                     if(sub<0){
                        sub=0;
                     }
                 }
        return maxi;
  
    }
};