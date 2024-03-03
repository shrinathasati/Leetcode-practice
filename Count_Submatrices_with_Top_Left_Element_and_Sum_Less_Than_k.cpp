class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        for(int i=0;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                grid[i][j]+=grid[i][j-1];
            }
        }
        
        for(int j=0;j<grid[0].size();j++){
            for(int i=1;i<grid.size();i++){
                grid[i][j]+=grid[i-1][j];
            }
        }
        
        int cnt=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]<=k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};