class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long sum) {
        // Your code here
        vector<int> temp;
        long long int s=0,j=0,i=0;
        for(i=0;i<n;i++){
            s+=arr[i];
            if(s>sum){
                while(s>sum&&i<j){
                    s-=arr[j];
                    j++;
                }
            }
            if(s==sum){
                temp.push_back(j+1);
                temp.push_back(i+1);
                return temp;
            }
        }
        
        temp.push_back(-1);
        return temp;
    }
};
