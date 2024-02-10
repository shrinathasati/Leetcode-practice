class Solution {
public:
int solve(vector<vector<int>>& dp,int m,int n,int row,int col){
        
        if(row==m-1 && col==n-1){
            return 1;
        }
        if(row>=m || col>=n){
            return 0;
        }
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        int right=solve(dp,m,n,row,col+1);
        int down=solve(dp,m,n,row+1,col);

        return dp[row][col]=right+down;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        int ans= solve(dp,m,n,0,0);
        return ans;
        
    }
};