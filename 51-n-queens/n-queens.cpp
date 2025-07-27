class Solution {
public:

bool isSafe(vector<string>& board, int row,int col,int n){
    //Horizontal chack
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    //Vertical check    
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    //Left diagonal check
    for(int i=row,j=col;i>=0 && j>=0 ;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    //Right diagonal check
    for(int i=row,j=col;i>=0 && j<n ;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }    
    return true;
}


void nq(vector<string>& board, int row,int n,vector<vector<string>>& ans){
    if(row==n){//Basecase
        ans.push_back({board});
        return;
    }
    for(int j =0; j<n; j++){
        if(isSafe(board,row,j,n)){
          board[row][j]='Q';//Q place if safe
          nq(board,row+1,n,ans);//Next call
          board[row][j]='.';//Backtracking by replace Q with .
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
     vector<string> board(n,string(n,'.'));
     vector<vector<string>> ans;
     nq(board,0,n,ans);//Function call
     return ans;
    }

};