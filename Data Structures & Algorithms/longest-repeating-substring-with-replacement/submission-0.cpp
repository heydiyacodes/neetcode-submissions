class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> hash;
        int res=0;

        int l=0,maxf=0;
        for(int r=0;r<s.size();r++){
            hash[s[r]]++;
            maxf=max(maxf,hash[s[r]]);

            while((r-l+1)-maxf>k){
                hash[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};
