class Solution {
public:
    int solve(vector<int> nums){
        // if(n==0){
        //     return nums[0];
        // }
        // if(n<0){
        //     return 0;
        // }
        // if(dp[n]!=-1){
        //     return dp[n];
        // }
        // int pick=nums[n]+solve(nums,n-2,dp);
        // int not_pick=solve(nums,n-1,dp);
        // return dp[n]=max(pick,not_pick);
        int n=nums.size();
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int curr1=nums[i]+prev2;
            int curr2=prev;
            prev2=prev;
            prev=max(prev,max(curr1,curr2));
        }
        return prev;
        
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp1;
        vector<int> temp2;
        if(n==0){
            return 0;
        }
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n;i++){
            if(i!=0){
                temp1.push_back(nums[i]);
            }
            if(i!=n-1){
                temp2.push_back(nums[i]);
            }
        }
        return max(solve(temp1),solve(temp2));
    }
};