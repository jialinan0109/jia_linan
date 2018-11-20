#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;

    cout<<"输入3个数：";
    cin>>a >>b >>c;

    if(a+b>c&&a+c>b&&b+c>a)
    {
        cout<<"这3个值可以表示一个三角形的三条边"<<endl;
    }
    else
        cout<<"z这3个值不可以表示一个三角形的三条边"<<endl;
}


