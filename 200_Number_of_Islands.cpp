class Solution {
public:
    vector<int> delrow={-1,0,1,0};
    vector<int> delcol={0,1,0,-1};
    void bfs(vector<vector<char>>& grid,vector<vector<int>>& vis,int i,int j){
        queue<pair<int,int>> q;
        int n=grid.size();
        int m=grid[0].size();
        q.push({i,j});
        vis[i][j]=1;
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(0<=nrow && nrow<n && 0<=ncol && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]=='1'){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]=='1'){
                    bfs(grid,vis,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};