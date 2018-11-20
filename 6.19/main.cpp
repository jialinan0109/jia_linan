#include <iostream>
#include <cmath>

using namespace std;
double hypotenuse(double,double);

int main()
{
    double a;
    double b;
    double c;
   for (int i=1;i<=3;i++)
   {
       cout<<"输入两直角边: ";
       cin>>a>>b;
       cout<<"斜边边长为："<<hypotenuse(a,b)<<endl;

   }


}

double hypotenuse(double a,double b)
{
    double c;
    c=a*a+b*b;
    c=sqrt(c);
    return c;
}
