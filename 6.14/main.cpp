#include <iostream>
#include <cmath>
using namespace std;

double roundToInteger (double number)
{

    double y;
    y=floor(number*10+0.5);
    cout<<"舍入到最近整数后的值："<<y<<endl;
}

double roundToTenths (double number)
{

    double y;
    y=floor(number*10+0.5)/10;
    cout<<"涉入到最近十分位后的值："<<y<<endl;
}

double roundToHundredths (double number)
{
    double y;
    y=floor(number*10+0.5)/100;
    cout<<"舍入到最近百分位后的值："<<y<<endl;
}

double roundToThousandths (double number)
{
    double y;
    y=floor(number*10+0.5)/1000;
    cout<<"舍入到最近千分位后的值："<<y<<endl;
}


int main()
{
   double x;

   cout<<"Enter a number: ";
   cin>>x;
   roundToInteger(x);

   roundToTenths(x);

   roundToHundredths(x);

   roundToThousandths(x);

    return 0;
}
