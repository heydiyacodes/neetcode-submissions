class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       priority_queue<int,vector<int>> maxheap;
       for(int s:stones) maxheap.push(s);

       while(maxheap.size()>1){
        int p=maxheap.top();
        maxheap.pop();
        int q=maxheap.top();
        maxheap.pop();
        if(p-q>0) maxheap.push(p-q);
       }
        maxheap.push(0);
        return maxheap.top();
    }
};
