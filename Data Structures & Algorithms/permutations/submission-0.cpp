class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        vector<bool> visi(nums.size(),false);
        backtrack(nums,path,res,visi);
        return res;
    }

    void backtrack(vector<int>& nums,vector<int>& path,vector<vector<int>>& res,vector<bool>& visi){
        if(path.size()==nums.size()){
            res.push_back(path);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(visi[i]==true) continue;
            visi[i]=true;
            path.push_back(nums[i]);
            backtrack(nums,path,res,visi);
            path.pop_back();
            visi[i]=false;
        }
    }
};
