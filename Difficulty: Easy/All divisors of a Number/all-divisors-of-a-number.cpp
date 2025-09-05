class Solution {
  public:
    void print_divisors(int n) {
        
        vector<int> arr;
        
        for(int i = 1; i*i<=n; i++){
            if(n % i == 0){
                cout<<i<<" ";
            
            if(i != n/i)
                arr.push_back(n/i);
            }
        }
    
        reverse(arr.begin(),arr.end());
        for(int d : arr) cout<<d<<" ";   
    }
};