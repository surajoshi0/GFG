class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int low = 0, mid = 0, high = 0;
        
        for(int i = 0; i<n; i++){
            if(arr[i]== 0){
                low++;
            } else if(arr[i] == 1){
                mid++;
            } else{
                high++;
            }
        }
        int index = 0;
        for(int i = 0; i<low; i++){
            arr[index++] = 0;
        }
        for(int i = 0; i<mid; i++){
            arr[index++] = 1;
        }
        for(int i = 0; i<high; i++){
            arr[index++] = 2;
        }
    }
};