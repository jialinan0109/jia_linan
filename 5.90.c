#include <iostream>

using namespace std;

int main()
{
    int a=1;
    a<16;
    int b=1;

    for(int i=0;i<15;i++)
    {
        cout<<"\n����һ������"<<a;
        if(a%2==1)
        {
            b=a*b;
        }
        a++;

    }
    cout<<"\n1��15�������ĳ˻���"<<b;
    return 0;
}
