class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        vector<int> st;
        for(int a:asteroids){
            bool destroy=false;
            while(!st.empty() && st.back()>0 && a<0){
                if(st.back() < -a){
                    st.pop_back();
                    continue;
                }else if(st.back() == -a){
                    st.pop_back();
                    destroy=true;
                    break;
                }else{
                    destroy=true;
                    break;
                }
            }
            if(!destroy) st.push_back(a);
        }
        return st;
    }
};