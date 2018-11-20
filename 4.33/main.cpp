#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout<<"输入3个数：";
    cin>>a>>b>>c;

    if(a*a+b*b==c*c ||a*a+c*c==b*b ||b*b+c*c==a*a)
        cout<<"这三个值可以表示一个直角三角形的三条边";
    else
        cout<<"这三个值不能表示一个直角三角形的三条边";

    return 0;
}
