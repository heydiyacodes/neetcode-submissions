class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<long long,int>,vector<pair<long long,int>>, greater<pair<long long,int>>> minheap;

        for (int i = 0; i < nums.size(); i++) minheap.push({nums[i], i});        
            
        while(k--){
            auto[val,ind]=minheap.top();
            minheap.pop();
            long long m=val*multiplier;
            minheap.push({m,ind});
        }

        while(!minheap.empty()){
            auto[finalval,ind]=minheap.top();
            minheap.pop();

            nums[ind]=finalval;
        }
        return nums;
    }
};