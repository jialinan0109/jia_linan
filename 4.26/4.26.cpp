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
                cout<<"输入的数必须是5位数"<<endl;
        }
        cout<<"输入的数必须是5位数"<<endl;
    }

    a=number/10000;
    b=number%10000/1000;
    c=number%10000%1000%100/10;
    d=number%10000%1000%100%10;

    if (a==d)
    {
        if(b==c)
            cout<<number<<"是回文数"<<endl;
        else
            cout<<number<<"不是回文数"<<endl;
    }
    else
        cout<<number<<"不是回文数"<<endl;


}
