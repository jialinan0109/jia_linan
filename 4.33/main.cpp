#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout<<"����3������";
    cin>>a>>b>>c;

    if(a*a+b*b==c*c ||a*a+c*c==b*b ||b*b+c*c==a*a)
        cout<<"������ֵ���Ա�ʾһ��ֱ�������ε�������";
    else
        cout<<"������ֵ���ܱ�ʾһ��ֱ�������ε�������";

    return 0;
}
