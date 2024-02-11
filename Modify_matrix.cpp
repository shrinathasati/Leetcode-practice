class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row;
        vector<int> col;
        vector<int> maxi;
        
        for(int j=0;j<m;j++){
            int max_ele=INT_MIN;
            for(int i=0;i<n;i++){
                if(matrix[i][j]==-1){
                    row.push_back(i);
                    col.push_back(j);
                }
                max_ele=max(max_ele,matrix[i][j]);
            }
            maxi.push_back(max_ele);
        }
        vector<vector<int>> ans=matrix;
        for(int i=0;i<row.size();i++){
            int val=col[i];
            ans[row[i]][val]=maxi[val];
        }
        return ans;
    }
};