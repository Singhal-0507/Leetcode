class Solution {
public:
    int solve(int m, int n,int i,int j,vector<vector<int>> &memo){
        if (memo[i][j] != -1){
            return memo[i][j];
        }
        if(i==m-1 && j ==n-1){
            return 1;
        }
        if(i == m || j == n){
            return 0;
        }
        memo[i][j] = solve(m,n,i+1,j,memo) + solve(m,n,i,j+1,memo);
        return memo[i][j];
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m+1,vector<int> (n+1,-1));
        return solve(m,n,0,0,memo);
    }
};