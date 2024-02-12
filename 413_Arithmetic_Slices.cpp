class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        if(n<3){
            return 0;
        }
        for(int i=0;i<n-2;i++){
            vector<int> temp;
            temp.push_back(nums[i]);
            temp.push_back(nums[i+1]);
            int diff=nums[i+1]-nums[i];
            int prev=nums[i+1];
            for(int j=i+2;j<n;j++){
                if(nums[j]-prev==diff){
                    temp.push_back(nums[j]);
                    if(temp.size()>=3){
                        count++;
                    }
                    prev=nums[j];
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};