class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adjls(n);
        for(const auto& edge:edges){
            adjls[edge[0]].push_back(edge[1]);
            adjls[edge[1]].push_back(edge[0]);
        }
        vector<int> visi(n,0);
        int ctr=0;

        for(int i=0;i<n;i++){
            if(!visi[i]){
                ctr++;
                dfs(i,adjls,visi);
            }
        }
        return ctr;
    }

    void dfs(int i,vector<vector<int>>& adjls,vector<int>& visi){
        visi[i]=1;
        for(int neigh:adjls[i]) if(!visi[neigh]) dfs(neigh,adjls,visi);
    }
};
