class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int n:nums) hash[n]++;

        // sort(hash.end(),hash.begin()); //O(nlogn)

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> heap;
        for(auto& it:hash){
            heap.push({it.second,it.first});
            if(heap.size()>k) heap.pop();
        }

        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};


