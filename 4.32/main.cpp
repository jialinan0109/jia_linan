#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;

    cout<<"����3������";
    cin>>a >>b >>c;

    if(a+b>c&&a+c>b&&b+c>a)
    {
        cout<<"��3��ֵ���Ա�ʾһ�������ε�������"<<endl;
    }
    else
        cout<<"z��3��ֵ�����Ա�ʾһ�������ε�������"<<endl;
}


