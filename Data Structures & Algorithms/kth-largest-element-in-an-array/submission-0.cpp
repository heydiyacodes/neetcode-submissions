class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    //     sort(nums.rbegin(),nums.rend()); //iterators.

    //     int ans=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(i==k-1) ans+= nums[i];
    //     }
    //     return ans;

    priority_queue<int,vector<int>,greater<int>> minheap;

    for(int n:nums) {
        minheap.push(n);
        if(minheap.size()>k) minheap.pop();
    }
    return minheap.top();
    }
};
