class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> maxheap;
        long long sum=0;
        for(int g:gifts) maxheap.push(g);

        while(k--){
            int currgreatest=maxheap.top();
            maxheap.pop();
            int sq=sqrt(currgreatest);
            maxheap.push(sq);
        }

        while(maxheap.size()>=1){
            sum+=maxheap.top();
            maxheap.pop();
        }
        return sum;
    }
};