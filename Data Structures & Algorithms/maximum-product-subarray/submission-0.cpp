class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int currmin=1,currmax=1;

        for(int i:nums){
            int temp=currmax*i;
            currmax=max(max(currmax*i,currmin*i),i);
            currmin=min(min(temp,currmin*i),i);
            res=max(currmax,res);
        }
        return res;  
    }
};
