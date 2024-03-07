class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        map<pair<int,int>,int> mp;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k){
                    if(mp.count({nums[i],nums[j]})==0){

                    count++;
                    mp[{nums[i],nums[j]}]++;
                    mp[{nums[j],nums[i]}]++;
                    }
                }
            }
        }
        return count;
    }
};