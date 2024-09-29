#include<iostream>
#include<vector>
using namespace std;

void add_zeros_to_list(vector<int> &number_list, int noOfZeros)
{
    for(int i=0; i<noOfZeros; i++){
        number_list.push_back(0);
    }
    cout << "C. Size of the list: "<<number_list.size()<<endl;
}

void print_all_data_from_list(vector<int> list){
    for(int num:list){
        cout<<num<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>list = {5,4,3};
    print_all_data_from_list(list);
    cout << "A. Size of the list: "<<list.size()<<endl;
    add_zeros_to_list(list,4);
    cout << "B. Size of the list: "<<list.size()<<endl;

    return 0;
}