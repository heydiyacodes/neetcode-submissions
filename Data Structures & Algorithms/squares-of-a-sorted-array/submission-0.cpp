class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        int l=0,r=n-1,resind=n-1;

        while(l<=r){
            if(nums[l]*nums[l]>nums[r]*nums[r]){
                ans[resind]=nums[l]*nums[l];
                l++;
            }else{
                ans[resind]=nums[r]*nums[r];
                r--;
            }
            resind--;
        }
        return ans;
    }
};