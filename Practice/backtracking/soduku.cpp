#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int mat[9][9], int i,int j,int n,int num){
    // check if the same number is present in the row or column
    for(int k = 0; k<n;k++){
        if(mat[i][k] == num || mat[k][j]==num){
            return false;
        }
    }

    // check the subgrid
    int Sx = (i/3)*3;
    int Sy = (j/3)*3;
    for(int x = Sx; x<Sx+3;x++){
        for(int y = Sy; y<Sy+3; y++){
            if(mat[x][y]==num){
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(int mat[9][9],int i,int j,int n){
    //base cases
    if(i == n){
        // Print the matrix later
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n){
        return solveSudoku(mat,i+1,0,n);
    }
    // if there is already one number present in a cell, skip it
    if(mat[i][j]!=0){
        return solveSudoku(mat,i,j+1,n);
    }
    // now check for every cell which number from 1-9 is correct
    for(int no = 1;no<n+1;no++){
        if(isSafe(mat,i,j,n,no)){
            mat[i][j]=no;
        bool subsetSudoku = solveSudoku(mat,i,j+1,n);
        if(subsetSudoku){
            return true;
        }
        }
    }
    // backtracking step in case, a particular cell should not have any value from 1-9.
    mat[i][j] = 0;
    return false;
}

bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    return solveSudoku(matrix, 0, 0 , 9);
}

int main()
{
    int n = 9;
    int mat[9][9] ={{9, 0, 0, 0, 2, 0, 7, 5, 0}, 
                    {6,0, 0, 0, 5, 0, 0, 4, 0}, 
                    {0, 2, 0, 4, 0, 0, 0, 1, 0}, 
                    {2,0, 8, 0, 0, 0, 0, 0, 0}, 
                    {0, 7, 0, 5, 0, 9, 0, 6, 0},
                    {0, 0, 0, 0, 0, 0, 4, 0, 1},
                    {0, 1, 0, 0, 0, 5, 0, 8, 0}, 
                    {0, 9, 0, 0, 7 ,0, 0, 0, 4},
                    {0, 8, 2, 0, 4, 0, 0, 0, 6}};

    if(isItSudoku(mat)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    return 0;
}   