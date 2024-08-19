// Ask the user name and age and print that in terminal

#include<iostream>
using namespace std;

int main()
{
    string name;
    int age;
    cout<<"Enter your name"<<endl;
    cin>> name;
    cout<<"Enter age:"<<endl;
    cin>> age;
    cout << "Hello "<<name << "! Your age is "<<age<<endl;
    return 0;
}