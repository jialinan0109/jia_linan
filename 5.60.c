#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=0;
    int n;
    cout<<"�������ĸ�����";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\n����һ������";
        cin>>a;
        b=a+b;
    }
    cout<<"��Щ����ƽ��ֵ�ǣ�"<<(b/n)<<endl;
    return 0;
}
