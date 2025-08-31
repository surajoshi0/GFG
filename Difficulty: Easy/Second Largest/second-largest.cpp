class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
       int n = arr.size();
       
       sort(arr.begin(),arr.end(),greater<int>());
       for(int i = 1; i<n; i++){
           if(arr[i] < arr[0]){
               return arr[i];
           }
       }
       return -1;
    }
};