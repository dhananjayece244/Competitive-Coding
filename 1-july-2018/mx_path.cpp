static int x = [](){ 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<int> result( obstacleGrid.size() + 1, 0 );
        int m = obstacleGrid.size() - 1;
        int n = obstacleGrid[0].size() - 1;
        
        result[m] = 1;
        
        for( int j = n; j >= 0; j-- )
        {
            for( int i = m; i >= 0; i-- )
            {
                if ( obstacleGrid[i][j] == 1 )
                    result[i] = 0;
                else
                    result[i] += result[i + 1];
            }
        }
        
        return result[0];
    }
};