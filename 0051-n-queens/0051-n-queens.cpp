class Solution {
public:
    bool isSafe(vector<vector<char>> &board,int i,int j,int n){
        for(int row = 0;row<i;row++)
            if(board[row][j] == 'Q') return false;
        for(int row = i-1,col = j-1;row>=0 && col>=0;row--,col--) 
            if(board[row][col] == 'Q') return false;
        for(int row = i-1,col = j+1;row>=0 && col<n;row--,col++) 
            if(board[row][col] == 'Q') return false;
        return true;
    }
    void nQueen(int n, vector<vector<string>> &res,vector<vector<char>> &board,int index){
        if (index == n) {
            vector<string> v;
            for (int i = 0; i < n; i++) {
                string str(board[i].begin(), board[i].end());  
                v.push_back(str); 
            }
            res.push_back(v); 
            return;
        }

        
            for(int j=0;j<n;j++){
                if(isSafe(board,index,j,n)){
                    board[index][j] = 'Q';
                    nQueen(n,res,board,index+1);
                    board[index][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<vector<char>> board(n,vector<char>(n,'.'));
        int index = 0;
        nQueen(n,res,board,index);
        return res;
    }
};