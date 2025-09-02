class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size()+1;
        long long arrsum=0;
        long long originalsum=n*(n+1)/2;
        
        for(long long i=0;i<n-1;i++){
            arrsum+=arr[i];
        }
    return originalsum-arrsum;
    }
};