class Solution {
public:
    int ans=0;
    void solve(int idx,vector<vector<int>> &students,vector<vector<int>> &mentors,int m,int n){
        if(idx==m){
            int sum=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(students[i][j]==mentors[i][j]){
                        sum+=1;
                    }
                }
            }
            ans=max(ans,sum);
            return;
        }
        for(int i=idx;i<m;i++){
            swap(students[i],students[idx]);
            solve(idx+1,students,mentors,m,n);
            swap(students[i],students[idx]);
        }
    }
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        int m=students.size();
        int n=students[0].size();

        solve(0,students,mentors,m,n);

        return ans;
    }
};