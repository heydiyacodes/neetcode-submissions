class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int ctr=0;
        int i=n-1;
        while(s[i] == ' ') i--;
        while(i>=0 && s[i] != ' '){
            ctr++;
            i--;
        }
        return ctr;
    }
};