#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=0;
    int n;
    cout<<"输入数的个数：";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\n输入一个数：";
        cin>>a;
        b=a+b;
    }
    cout<<"这些数的平均值是："<<(b/n)<<endl;
    return 0;
}
