#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int a;
    int b;
    int c;
    int d;
    int e;

    while (e != 5)
    {
        cout<<"Enter a number:";
        cin>>number;
        if (number < 100000)
        {
            if (number >9999)
            {
                e = 5;
            }
            else
                cout<<"�������������5λ��"<<endl;
        }
        cout<<"�������������5λ��"<<endl;
    }

    a=number/10000;
    b=number%10000/1000;
    c=number%10000%1000%100/10;
    d=number%10000%1000%100%10;

    if (a==d)
    {
        if(b==c)
            cout<<number<<"�ǻ�����"<<endl;
        else
            cout<<number<<"���ǻ�����"<<endl;
    }
    else
        cout<<number<<"���ǻ�����"<<endl;


}
