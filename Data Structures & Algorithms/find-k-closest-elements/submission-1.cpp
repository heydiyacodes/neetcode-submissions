class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> maxheap;

        for(int n:arr){
            int dist=abs(n-x);
            maxheap.push({dist,n});
            if(maxheap.size()>k)  maxheap.pop();
        }
        vector<int> ans;
        while(!maxheap.empty()){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }
        sort(ans.begin(),ans.end());
        return ans; 
    }
};
// int l=0,r=arr.size()-1;
        // while(r-l>=k){
        //     if(abs(arr[l]-x) <= abs(arr[r]-x)) r--;
        //     else l++;
        // }
        // return vector<int>(arr.begin()+l,arr.begin()+r+1);  