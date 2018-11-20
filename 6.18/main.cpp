#include <iostream>
#include <cmath>
using namespace std;

int integerPower(int,int);
int main()
{
    int a;
    int b;
    int e;
    cout<<"Enter base and exponent: ";
    cin>>b>>e;
    cout << b<< " to the power " << e<< " is: "
      << integerPower( b, e ) << endl;

}

int integerPower (int base,int exponent)
{
    int a=1;
    for (int i=1;i<=exponent;i++)
        a*=base;
    return a;
}
