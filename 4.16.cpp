#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    while(a!=-1)
    {
        cout<<"Enter hours worked (-1 to end): ";
        cin>>a;
        if (a!=-1)
        {
            if (a>40)

            {
            b=a-40;
            cout<<"Enter hourly rate of the employee ($00.00):10"<<endl;
            cout<<"Salary is $"<<400+b*15<<endl;
            }
        else
        {
        cout<<"Enter hourly rate of the employee ($00.00):10"<<endl;
        cout<<"Salary is $"<<a*10<<endl;
        }
        }

    }
    return 0;
}
