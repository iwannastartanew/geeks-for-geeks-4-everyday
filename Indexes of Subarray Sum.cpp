class Solution {
  public:
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        long long sum=0;
        int j=0;
        for(int i=0;i<n;i++){
            sum+=(long long)arr[i];
            if(sum>=s){
                
                while(sum>s && j<i){
                    sum-=arr[j];
                    j++;
                }
                
                if(sum==s){
                    return {j+1,i+1};
                }
            }
        }
        
       return  {-1};
    }
};
