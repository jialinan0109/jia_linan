#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=1;
    int c=0;

    cout<<"����һ����������:";
    cin>>a;
    while(a!=0)
    {
        c+= a%10*b;
        a/= 10;
        b*=2;
    }
    cout<<"C is:"<<c<<endl;
}
