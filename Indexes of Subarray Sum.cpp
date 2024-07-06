lass Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> a, int n, long long s) {
        int l=0;long long sum=0;
        vector<int>ans; 
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(sum>s)
            {
                sum=sum-a[l];
                l++;
            }
            if(sum==s)
            {
                ans.push_back(l+1);
                ans.push_back(i+1);
                return ans;
            }
        }
        ans.push_back(-1);
        return ans;
        
        
    }
};
