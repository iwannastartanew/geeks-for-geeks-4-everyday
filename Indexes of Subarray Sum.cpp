class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        // Your code here
        long long sum=0;
        vector<int> v;
        int l=1,r=0,flag=0; 
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum==s){
                r++;
                flag=1;
                break;
            }
            else if(sum<s){
                r++;
                continue;
            }
            else{
                sum=sum-arr[l-1];
                r++;
                l++;
                if(sum==s){
                    break;
                }
            }
        }
        if(((r==0)||(flag=0))||(s==0)){
            v.push_back(-1);
            return v;
        }
        else{
            v.push_back(l);
            v.push_back(r);
            return v;
        }
        
    }
};
