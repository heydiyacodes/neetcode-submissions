class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> maxheap;

        for(const auto& pts: points){
            int x= pts[0];
            int y=pts[1];
            int dist=x*x+y*y;

            maxheap.push({dist,pts});

            if(maxheap.size()>k) maxheap.pop();
        }
        vector<vector<int>> res;
        while(!maxheap.empty()){
            res.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return res;
    }
};
