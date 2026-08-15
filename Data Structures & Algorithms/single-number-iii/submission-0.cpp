class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int n:nums) hash[n]++;
        vector<int> arr;
        for(auto i:hash){
            if(i.second==1) arr.push_back(i.first);
        }
        return arr;
    }
};