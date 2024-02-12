class Solution {
public:
    int fun(int row,int c1,int c2,vector<vector<int>>& grid,vector<vector<vector<int>>> &dp){
        if(c1<0 || c2 < 0 || c1>=grid[0].size() || c2>=grid[0].size()){
            return 0;
        }
        if(row == grid.size()) return 0;
        if(dp[row][c1][c2]!=-1) return dp[row][c1][c2];
        int ans = 0;
        ans += grid[row][c1];
        ans += grid[row][c2];
        int maxi = INT_MIN;
        for(int i = c1-1;i<=c1+1;i++){
            for(int j = c2-1;j<=c2+1;j++){
                if(i<j){
                    maxi = max(maxi,fun(row+1,i,j,grid,dp));
                }
            }
        }
        ans += maxi;
        return dp[row][c1][c2] = ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<vector<int>>> dp (rows,vector<vector<int>>(cols,vector<int>(cols,-1)));
        return fun(0,0,cols-1,grid,dp);
    }
};