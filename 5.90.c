#include <iostream>

using namespace std;

int main()
{
    int a=1;
    a<16;
    int b=1;

    for(int i=0;i<15;i++)
    {
        cout<<"\n输入一个数："<<a;
        if(a%2==1)
        {
            b=a*b;
        }
        a++;

    }
    cout<<"\n1到15中奇数的乘积："<<b;
    return 0;
}
