class Solution {
public:
    int binarysearch(vector<int> &arr, int target) {
        int n = arr.size();
        int left = 0;
        int right = n - 1;
        int result = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == target) {
                result = mid;           // store the index
                right = mid - 1;       // continue searching in left half for first occurrence
            }
            else if (arr[mid] < target) {
                left = mid + 1;        // search right half
            }
            else {
                right = mid - 1;       // search left half
            }
        }
        
        return result;
    }
};