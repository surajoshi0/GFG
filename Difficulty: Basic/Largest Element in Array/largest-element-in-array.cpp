class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        for(int i = 0; i<n; i++){
            return arr[n-1];
        }
    }
};
