class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string,vector<string>> res;
        // for(const auto& s:strs){
        //     string sorteds=s;
        //     sort(sorteds.begin(),sorteds.end());
        //     res[sorteds].push_back(s);
        // }

        // vector<vector<vector<string>>> result;
        // for(auto& pair:res){
        //     result.push_back(pair.second);
        // }
        // return result;
        unordered_map<string,vector<string>> hash;
        for(const auto& s:strs){
            string key=s;
            sort(key.begin(),key.end());
            hash[key].push_back(s);
        }

        vector<vector<string>> res;
        for(const auto& pair:hash) res.push_back(pair.second);
        return res;
    }
};
