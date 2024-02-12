class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> vec;
        int n=nums.size();
        for(int i=0;i<n;i++){
            vec.push_back({nums[i],i});
        }
        sort(vec.begin(),vec.end());
        int left=0;
        int right=n-1;
        vector<int> ans;
        while(left<right){
            if(vec[left].first+vec[right].first==target){
                ans.push_back(vec[left].second);
                ans.push_back(vec[right].second);
                return ans;
            }
            else if(vec[left].first+vec[right].first>target){
                right--;

            }
            else{
                left++;
            }
        }
        return ans;
    }
};