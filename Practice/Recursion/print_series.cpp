#include<iostream>
#include<vector>
using namespace std;


void helper(int i, int j,int x,vector<int> &ans){
    // cout<<x<<"";
    if(i>x){
        // ans.push_back(i);
        return;
    }
    if(i<0){
        ans.push_back(i);
        return;

    } 
    ans.push_back(i);
    helper(i - j, j, x, ans);
    ans.push_back(i);
}

vector<int> printSeries(int n, int k)
{
    vector<int> ans;
    helper(n,k,n,ans);
    return ans;
}

int main()
{
    vector<int> res = printSeries(5,2);
    for(int a:res){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}