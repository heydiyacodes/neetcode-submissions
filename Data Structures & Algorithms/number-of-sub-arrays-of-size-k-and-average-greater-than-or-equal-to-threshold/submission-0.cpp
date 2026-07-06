class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ctr=0,sum=0;
        int targetsum=threshold*k;

        for(int l=0;l<k;l++) sum+=arr[l];
        if(sum>=targetsum) ctr++;

        for(int r=k;r<arr.size();r++){
            sum+=arr[r];
            sum-=arr[r-k];
            if(sum>=targetsum) ctr++;
        }
        return ctr;
    }
};