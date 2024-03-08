class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=start;
        for(int i=1;i<n;i++){
            int cal=start+2*i;
            ans=ans^cal;
        }
        return ans;
    }
};