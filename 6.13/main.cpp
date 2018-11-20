#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;

    cout<<"Enter a number: ";
    cin>>x;
    y = floor(x+0.5);
    cout<<"最接近它的整数："<<y;

    return 0;
}
