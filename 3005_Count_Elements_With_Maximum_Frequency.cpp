class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // map<int,int> mp;
        // for(auto it:nums){
        //     mp[it]++;
        // }
        
        vector<int> v(101,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        
        sort(v.begin(),v.end());
        int n=v.size();
        int ans=v[n-1];
        for(int i=n-2;i>=0;i--){
            if(v[i]==v[i+1]){
                ans+=v[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};