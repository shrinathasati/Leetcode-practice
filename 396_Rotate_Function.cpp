class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {

        // Method 1: TLE 45/58 test cases passed

        // int ans=INT_MIN;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=0;j<n;j++){
        //         sum+=(j*nums[(j+i)%n]);
        //     }
        //     ans=max(sum,ans);
        // }
        // return ans;

        // Method 2:
        int n=nums.size();
        if(n==0){
            return 0;
        }
        
        vector<int> dp(n,0);

        int sum=0;
        int ans=0;;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans+=(i*nums[i]);
        }

        dp[0]=ans;
        for(int i=1;i<n;i++){
            dp[i]=dp[i-1]+sum-n*nums[n-i];
            ans=max(ans,dp[i]);
        }

        return ans;


    }
};