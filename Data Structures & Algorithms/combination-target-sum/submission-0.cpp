class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> path;
        backtrack(nums,target,0, path,res);
        return res;
    }

    void backtrack(vector<int>& nums,int target,int start, vector<int>& path, vector<vector<int>>& res){
        if(target==0){
            res.push_back(path);
            return;
        }
        if(target<0) return;

        for(int i=start;i<nums.size();i++){
            path.push_back(nums[i]);
            backtrack(nums,target-nums[i],i,path,res);
            path.pop_back();
        }
    }
};
