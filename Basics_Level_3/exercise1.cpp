// Compute the max value inside a list of numbers, create a function and pass the vector as a parameter

#include<iostream>
#include<vector>
using namespace std;

int findMaxNumber(vector<int>nums){
    int max_val = -1e9;
    for(int num:nums){
        if(num>max_val){
            max_val = num;
        }
    }
    return max_val;
}

int main()
{
    vector<int> numbers = {12,43,5,75,7};
    int max_num = findMaxNumber(numbers);
    cout << "The maximum number is " << max_num <<endl;
    return 0;
}