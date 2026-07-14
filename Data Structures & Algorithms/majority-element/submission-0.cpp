class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        int res=0,maxcnt=0;

        for(int i=0;i<nums.size();i++) hash[nums[i]]++;

        int n=nums.size()/2;
        for(auto it:hash) if(it.second>n) return it.first;
        return 0;
    }
};