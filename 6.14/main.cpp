#include <iostream>
#include <cmath>
using namespace std;

double roundToInteger (double number)
{

    double y;
    y=floor(number*10+0.5);
    cout<<"���뵽����������ֵ��"<<y<<endl;
}

double roundToTenths (double number)
{

    double y;
    y=floor(number*10+0.5)/10;
    cout<<"���뵽���ʮ��λ���ֵ��"<<y<<endl;
}

double roundToHundredths (double number)
{
    double y;
    y=floor(number*10+0.5)/100;
    cout<<"���뵽����ٷ�λ���ֵ��"<<y<<endl;
}

double roundToThousandths (double number)
{
    double y;
    y=floor(number*10+0.5)/1000;
    cout<<"���뵽���ǧ��λ���ֵ��"<<y<<endl;
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
