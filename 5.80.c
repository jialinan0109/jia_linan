#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int n;
    cout<<"输入这组数的个数：";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"输入一个数：";
        cin>>a;
        if(a<b)
            b=a;
        else
            b=b;


    }
    cout<<"\n这组数中的最小数为："<<b;
    return 0;
}
