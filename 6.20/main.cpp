#include <iostream>

using namespace std;
bool multiple(int,int);
int main()
{
    int a;
    int b;
    for (int i=1;i<=5;i++)
    {
        cout<<"��������������";
        cin>>a>>b;
        if(multiple(a,b))
            cout<<b<<"��"<<a<<"�ı���"<<endl;
        else
            cout<<b<<"����"<<a<<"�ı���"<<endl;
    }

}

bool multiple(int a,int b)
{
   return !(b%a);
}
