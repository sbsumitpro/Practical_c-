#include<iostream>
using namespace std;

int main()
{
    cout << boolalpha;

    // cout << true << endl;
    // cout << false << endl;

    // cout << (1.0 == 1) <<endl;

    int user_age = 100;

    if((user_age >=18)&& (user_age<30)){
        cout << "You are officially an adult and you are below 30" <<endl ;
    }else if(user_age<18){
        cout << "You are not an adult yet"<<endl;
    }else{
        cout << "You are 30 or more" << endl;
    }

    cout << "End of program" << endl;

    return 0;
}