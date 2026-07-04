class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> count;

        for(char c:chars){
            count[c]++;
        }
        int res=0;
        for(const string& w:words){
            unordered_map<char,int> currword;
            bool good=true;

            for(char c:w){
                currword[c]++;
                if(currword[c]>count[c]){
                    good=false;
                    break;
                }
            }
            if(good) res+=w.size();
        }
        return res;
    }
};