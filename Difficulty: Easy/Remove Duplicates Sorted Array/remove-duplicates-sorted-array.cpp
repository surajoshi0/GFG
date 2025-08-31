class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        vector<int> result;
        
        for(int i = 0;i<n; i++){
            if(arr[i] != arr[i+1]){
                result.push_back(arr[i]);
            }
        }
        return result;
    }
};
