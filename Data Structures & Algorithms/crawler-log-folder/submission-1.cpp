class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        int ctr=0; 

        for(string c:logs){
            if(c=="../") {
                if(!st.empty()) st.pop();
            }
            else if(c=="./") continue;
            else st.push(c);
        }
        return st.size();
    }
};