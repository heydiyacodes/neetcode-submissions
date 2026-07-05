class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currlen=0,maxsofar=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currlen++;
                maxsofar=max(maxsofar,currlen);
            }
            if(nums[i]==0) currlen=0;
        }
        return maxsofar;
    }
};