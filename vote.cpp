#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"\nU r eligible for voting";
    }
    else
    {
        cout<<"\nU r not eligible for voting";
    }
    return 0;
}
