class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(string s:operations){
            if(s=="+"){
                int top1=st.top();st.pop();
                int top2=st.top();
                st.push(top1);
                int sum=top1+top2;
                st.push(sum);
            }else if(s=="D"){
                int doub= 2*st.top();
                st.push(doub);
            }else if(s=="C") st.pop();
            else st.push(stoi(s));
        }
        int stacksum=0;
        while(!st.empty()){
            stacksum+=st.top();
            st.pop();
        }
        return stacksum;
    }
};