// Check if the given array is sorted

#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>arr, int i)
{
    int n = arr.size();
    if(i==n-1){
        return true;
    }
    bool isSmallArraySorted = isSorted(arr, i+1);
    return isSmallArraySorted && (arr[i]<=arr[i+1]);
}

int main()
{
    vector<int> arr;
    arr = {2,4,50,7,8};
    cout << isSorted(arr, 0)<<endl;
    return 0;
}