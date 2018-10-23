#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;
    (number2=200+number1*0.09);
    while(number1!=-1)
    {
        cout<<"Enter sales in dollars (-1 to end):";
        cin>>number1;
        if(number1!=-1)
        {
        cout<<"Salary is:$"<<number2+number1*0.09<<endl;
        }

    }
    return 0;
}
