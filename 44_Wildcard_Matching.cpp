class Solution {
public:
    bool solve(int i,int j,string &s,string &p, vector<vector<int>> &dp){
        if(i<0 && j<0){
            return true;
        }
        if(i>=0 && j<0){
            return false;
        }
        if(i<0 && j>=0){
            for(int k=0;k<=j;k++){
                if(p[k]!='*'){
                    return false;
                }
            }
            return true;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        if(p[j]==s[i] || p[j]=='?'){
            return dp[i][j]=solve(i-1,j-1,s,p,dp);
        }

        if(p[j]=='*'){
            bool consider=solve(i-1,j,s,p,dp);
            bool notconsider=solve(i,j-1,s,p,dp);

            return dp[i][j]=consider||notconsider;

        }
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        bool ans=false;
        ans=solve(n-1,m-1,s,p,dp);
        return ans;
    }
};