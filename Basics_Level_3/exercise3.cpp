// Compute the max value inside a list of numbers, create a function and pass the vector as a parameter. But, take the vector as a input from the user. Take the input until user enters 0.

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
    vector<int> numbers;
    cout << "Enter the numbers of the array"<<endl;
    int num;
    while(true){
        cin>> num;
        if(num!=0){
            numbers.push_back(num);
        }else{
            break;
        }
    } 
    
    cout << "you entered" <<endl;
    for(int num:numbers){
        cout<<num<<" "; 
    }

    int max_num = findMaxNumber(numbers);
    cout << endl<<"The maximum number is " << max_num <<endl;
    return 0;
}