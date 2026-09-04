class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int area=0;

        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                if(grid[r][c]==1) area=max(area,dfs(grid,r,c));
            }
        }
        return area;
    }

    int dfs(vector<vector<int>>& grid, int r,int c){
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size()||grid[r][c]==0) return 0;

        grid[r][c]=0;
        return 1+dfs(grid,r,c+1) + dfs(grid,r+1,c)+dfs(grid,r-1,c)+dfs(grid,r,c-1);
    }
};
