#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int n;
    cout<<"�����������ĸ�����";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"����һ������";
        cin>>a;
        if(a<b)
            b=a;
        else
            b=b;


    }
    cout<<"\n�������е���С��Ϊ��"<<b;
    return 0;
}
