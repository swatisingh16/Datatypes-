#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    char ch = 'c';
    float f = 2.56;
    double lf = 7.4568;
    
    cout<<"Size of char: "<<sizeof(char)<< " byte"<< endl;
    cout<<"Size of int: "<<sizeof(int)<< " bytes"<< endl;
    cout<<"Size of float: "<<sizeof(float)<< " bytes"<< endl;
    cout<<"Size of double: "<<sizeof(double)<< " bytes"<< endl;
    
    return 0;
}
