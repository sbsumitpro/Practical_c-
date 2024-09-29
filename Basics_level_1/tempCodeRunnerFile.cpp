// Find average of float array

#include<iostream>
#include <numeric>
#include<vector>
using namespace std;

int main()
{
    vector<double> nums = {12.3, 21.4, 32.5, 33.1};
    double sum = accumulate(nums.begin(), nums.end(),0.0);
    cout<<sum<<endl;

     
    return 0;
}