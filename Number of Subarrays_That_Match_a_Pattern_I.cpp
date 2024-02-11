class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int count=0;
        int n=nums.size();
        int m=pattern.size();
        
        for(int i=0;i<n-m;i++){
            bool ans=true;
            for(int j=0;j<m;j++){
                if(pattern[j]==1){
                    if(nums[i+j+1]<=nums[i+j]){
                        ans=false;
                        break;
                    }
                }
                else if(pattern[j]==0){
                    if(nums[i+j+1]!=nums[i+j]){
                        ans=false;
                        break;
                    }
                }
                else if(pattern[j]==-1){
                    if(nums[i+j+1]>=nums[i+j]){
                        ans=false;
                        break;
                    }
                }
            }
            if(ans){
                count++;
            }
        }
        return count;
    }
};