class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int k=nums.size()/2;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
                if(count>k){
                    return nums[i];
                }
            }
            else if(nums[i]!=nums[i-1]){
                count=1;
            }
        } 
        return -1;
    }
};