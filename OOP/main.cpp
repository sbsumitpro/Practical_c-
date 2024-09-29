#include<iostream>
using namespace std;

class Robot{

public:
    Robot(string name, int version_number) // constructor function
        :name(name), version_number(version_number), internal_temp(30.0)
    {
        // this->name = name;
        // this-> version_number = version_number;
        // this->internal_temp = 30.0;
    }

    void say_hi(){
        cout << "Hello, my name is " << name << ", ready to help"<<endl;
    }

    void init_hardware(){
        cout<<"Init hardware"<<endl;
    }

    void print_info(){
        say_hi();
        cout << "Version number: "<<version_number <<endl;
        cout<< "Temperature" << internal_temp<<endl; 
    }


private:    
    string name;
    int version_number;
    double internal_temp;
};

int main()
{
    Robot robot1("R2D2",3);
    robot1.init_hardware();
    robot1.print_info();
    return 0;
}