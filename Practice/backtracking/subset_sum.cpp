#include<iostream>
#include<vector>
using namespace std;

void helper(vector<int> arr, int i,vector<vector<int>> &res,vector<int> &currentArr, int n, int targetSum)
{
    if(i == n){
        if(targetSum == 0){
            for(int x:currentArr){
                cout << x << " ";
            }
        cout<<endl;
        }
        return;
    }
    helper(arr,i+1,res,currentArr, n, targetSum);
    currentArr.push_back(arr[i]);
    helper(arr,i+1,res,currentArr,n, targetSum - arr[i]);
    currentArr.pop_back();
}


vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    cout << boolalpha;
    vector<vector<int>> res;
    vector<int> currentArr;
    helper(arr,0,res,currentArr,n,k);
    return res;
}

int main()
{
    findSubsetsThatSumToK({0,0,0},3,0);
    return 0;
}