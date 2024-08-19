// Convert celcius to farenhite
// F = C*1.8+32

#include<iostream>
using namespace std;

double celcius_to_farenhite(double celcius){
    double f;
    f = celcius*1.8 + 32;
    cout << "The tempereture in farenhite is :" << f <<endl;
    return 0.0;
}

int main()
{
    double celcius;
    cout << "Enter the tempteratue in celcius..:"<<endl;
    cin >> celcius;
    celcius_to_farenhite(celcius);
    return 0;
}

