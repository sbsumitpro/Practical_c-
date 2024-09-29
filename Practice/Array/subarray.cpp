#include<iostream>
#include<climits>
using namespace std;

void printSubarray(int arr[], int n){
    int count =0;
    int max_sum = INT_MIN;

    for(int i =0; i<n; i++){
        for(int j= i;j<n;j++){
             count++;
             int sum =0;
             cout<<"Count:"<<count<<endl;
            for(int k = i; k<=  j;k++){
                sum += arr[k];
                cout<<arr[k]<<",";
            }
            cout<<"-->Sum:"<<sum;
            if(sum>max_sum){
                max_sum = sum;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"Max sum-"<<max_sum<<endl;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    printSubarray(arr,n);
    return 0;
}