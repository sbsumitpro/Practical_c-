#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int>> &board, int row, int col, int n){
    for(int i=0;i<row;i++){
        if(board[i][col]==1){
            return false;
        }
    }
    for(int i=row, j=col; i>=0 && j >= 0; i--, j--){
        if(board[i][j]==1) return false;
    }
    for(int i = row, j = col; i>= 0 && j<n; i--, j++){
        if(board[i][j]==1) return false;
    }

    return true;
}


void helper(vector<vector<int>> &board, vector<vector<int>> &ans, int row, int n){
    if(row == n){
        vector<int> temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp.push_back(board[i][j]);
            }
        }
        ans.push_back(temp);
        return;
    }

    for(int col = 0; col <n; col++){
        if(isSafe(board, row,col, n)){
            board[row][col] = 1;
            helper(board,ans, row+1,n);
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> nQueens(int n)
{
	vector<vector<int>> board(n,vector<int>(n,0));
    vector<vector<int>> ans;
	helper(board, ans,0, n);
    // for(int i=0; i<ans.size(); i++){
    //     for(int j =0; j<ans[0].size(); j++){
    //         cout << ans[i][j]<< " ";
    //     }
    //     cout << endl;
    // }
    // cout<<endl;
    return ans;
}

int main()
{
    int n = 4;
    nQueens(n);
    return 0;
}