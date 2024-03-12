class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,int row,int col,int color,int ini_color,vector<int> delrow,vector<int> delcol){
        ans[row][col]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(0<=nrow && nrow<n && 0<=ncol && ncol<m && image[nrow][ncol]==ini_color && ans[nrow][ncol]!=color){
                dfs(image,ans,nrow,ncol,color,ini_color,delrow,delcol);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ini_color=image[sr][sc];
        vector<vector<int>> ans=image;
        vector<int> delrow={-1,0,1,0};
        vector<int> delcol={0,1,0,-1};
        dfs(image,ans,sr,sc,color,ini_color,delrow,delcol);
        return ans;
    }
};