class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int ans=0;
        vector<int>rowcount(grid.size(),0);
        vector<int>colcount(grid[0].size(),0);
        for(int i=0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                rowcount[i]++;
                colcount[j]++;
                }
            }
        }
        for(int i =0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    if(rowcount[i]>1 || colcount[j]>1){
                        ans++;
                    }
                }
            }
        }        
        return ans;
    }
};