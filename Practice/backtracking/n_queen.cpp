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


void helper(vector<vector<int>> &board, vector<vector<vector<int>>> &ans, int row, int n){
    if(row == n){
        ans.push_back(board);
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

vector<vector<vector<int>>> nQueens(int n)
{
	vector<vector<int>> board(n,vector<int>(n,0));
    vector<vector<vector<int>>> ans;
	helper(board, ans,0, n);
    for(int k = 0; k<ans.size();k++){
        cout<<"Solution "<<k+1<<": "<<endl;
        for(int i=0; i<n; i++){
            for(int j =0; j<n; j++){
                cout << ans[k][i][j]<< " ";
            }
            cout << endl;
        }
        cout<<endl;
    }
    return ans;
}

int main()
{
    int n = 10;
    nQueens(n);
    return 0;
}