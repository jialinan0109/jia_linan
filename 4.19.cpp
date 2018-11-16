#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c;
    int counter=1;
    int number;

    while(counter<=10)
    {
        cout<<"The number is: ";
        cin>>number;
        if(number>a)
        {
            cout<<"The largest is: "<<number<<endl;
            cout<<"The second is: "<<a<<endl;
            a=number;
        }
        if(a>number>b)
        {
            cout<<"The largest is: "<<a<<endl;
            b=number;
            cout<<"The second is: "<<b<<endl;

        }
        if(number<b)
        {
            cout<<"The largest is: "<<a<<endl;
            cout<<"The second is: "<<b<<endl;

        }
        c=counter++;
        cout<<"counter is: "<<c<<endl<<endl;

    }
    return 0;
}
