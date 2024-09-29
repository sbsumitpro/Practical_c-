#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <double> temperature_list = {12.3, -4.5, 21.6, 45.3, -16.5};

    // for(int i = 0; i< temperature_list.size();i++){
    //     double temp = temperature_list.at(i);
    //     if(temp<0.0){
    //         cout << temp <<" : it's freezing !!"<<endl;
    //     }else{
    //         cout<<temp<<endl;
    //     }
    // }

    for (double temp:temperature_list){
        if(temp<0.0){
            cout << temp <<" : it's freezing !!"<<endl;
        }else{
            cout<<temp<<endl;
        }
    }

    return 0;
}