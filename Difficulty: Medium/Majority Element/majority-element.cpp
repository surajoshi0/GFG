class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int maj_count = n/2;
        
        unordered_map<int,int>freq;
        for(int num: arr){
            freq[num]++;
            
        if(freq[num] > maj_count){
            return num;
        }
      }
        return -1;
    }
};