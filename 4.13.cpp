#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double d;
    while(a != -1)
    {
        cout<<"Enter miles driven (-1 to quit): ";
        cin>>a;
        if (a!=-1)
        {
        cout<<"Enter gallons used: ";
        cin>>b;
        c +=a;
        d +=b;
        cout<<"MPG this trip: "<<a/b<<endl;

        cout<<"Total MGP: "<<c/d<<endl;
        }
    }
        cout<<"Enter the miles used (-1 to quit): -1";


}
