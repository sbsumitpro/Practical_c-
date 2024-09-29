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

int prefixSum(int arr[], int n){
    int max_sum = INT_MIN;
    int prefix[n] ={0};
    prefix[0] = arr[0];
    for(int i = 1; i<n; i++){
        prefix[i]= prefix[i-1]+arr[i];
    }

    for(int i=0;i<n;i++){
        int subarraySum;
        for(int j=i;j<n; j++){
            subarraySum = i>0?prefix[j]-prefix[i-1]:prefix[j];
            // cout<<subarraySum<<":"<<i<<","<<j<<endl;
            if(subarraySum>max_sum){
                max_sum = subarraySum;
            }
        }
    }
    return max_sum;
}

int kedanes(int arr[],int n){
    int curr_sum = 0; 
    int max_sum = INT_MIN;
    int x = INT_MIN;
    for(int i=0; i<n;i++){
        curr_sum += arr[i];
        if(curr_sum>x){
            x = curr_sum;
        }
        if(curr_sum<0){
            curr_sum = 0;
        }
        max_sum = max(curr_sum,max_sum);
        
    }
    return x<0?x:max_sum;
}

int main()
{
    // int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int arr[] = {-2,-3,-4,-6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printSubarray(arr,n);
    // cout<<prefixSum(arr,n)<<endl;
    cout<<kedanes(arr,n)<<endl;
    return 0;
}