class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int res=INT_MAX;
        sort(nums.begin(),nums.end());

        int l=0,r=k-1;
        while(r<nums.size()){
            res=min(res,nums[r]-nums[l]);
            l++,r++;
        }
        return res;
    }
};