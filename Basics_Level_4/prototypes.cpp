#include<iostream>
using namespace std;

void print_tripple_number(int num);
int tripple_number(int num);

void print_tripple_number(int num){
    cout << tripple_number(num) <<endl;
}

int tripple_number(int num){
    return num *3;
}


int main()
{
    print_tripple_number(4);
    return 0;
}