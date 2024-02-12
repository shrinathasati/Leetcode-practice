class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return true;
        }
        vector<int> dp(n,0);
        dp[0]=nums[0];
        for(int i=1;i<n-1;i++){
            if(dp[i-1]>0){
                dp[i]=max(dp[i-1]-1,nums[i]);

            }
            if(dp[i]==0){
                return false;
            }
        }
        if(dp[0]==0){
            return false;
        }
        return true; 
    }
};