#include <iostream>

using namespace std;

int main()
{
    int a;
    int n;
    int b=0;
    cout<<"输入个数：";
    cin>>n;

    for(int i=0;i<n;i++)
        {

         cout<<"输入一个数：";
         cin>>a;
         b=a+b;
        }
    cout<<"几个数的和是："<<b<<endl;



    return 0;
}
