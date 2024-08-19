#include <iostream>
#include <vector>
using namespace std;

int main()
{
    double temperature_list[4] = {21,54.4, 34.5, 18};
    cout << temperature_list[3]<<endl;
    cout << temperature_list[2]<<endl;
    cout << temperature_list[0]<<endl;
    vector <double> temperatures = {12,32,54.4};
    cout<< "ds "+ to_string(temperatures.at(1))<<endl;
    temperatures.push_back(43.54);
    cout<< temperatures.size()<<endl;


    return 0;
}