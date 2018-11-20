#include <iostream>

using namespace std;
bool multiple(int,int);
int main()
{
    int a;
    int b;
    for (int i=1;i<=5;i++)
    {
        cout<<"输入两个整数：";
        cin>>a>>b;
        if(multiple(a,b))
            cout<<b<<"是"<<a<<"的倍数"<<endl;
        else
            cout<<b<<"不是"<<a<<"的倍数"<<endl;
    }

}

bool multiple(int a,int b)
{
   return !(b%a);
}
