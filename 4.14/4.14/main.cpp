#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;
    int number3=0;
    int number4=0;
    int number5=0;
    int number6=0;
    while (number1 != -1)
    {
        cout<<"Enter account number (or -1 to quit):";
        cin>>number1;
        if(number1!=-1)
        {

        cout<<"Enter beginning balance:";
        cin>>number2;
        cout<<"Enter total charges:";
        cin>>number3;
        cout<<"Enter total credits:";
        cin>>number4;
        cout<<"Enter credit limit:";
        cin>>number5;
        number6=number2+number3-number4;
        if(number6>number5)
        {
            cout<<"New balance is  "<<(number6=number2+number3-number4)<<endl;
        cout<<"Account  :"<<number1<<endl;
        cout<<"Credit limit:"<<number5<<endl;
        cout<<"Balance:  "<<number6<<endl;
        cout<<"Credit Limit Exceeded."<<endl;
        }


        if(number6<number5)
    cout<<"New balance is  "<<(number6=number2+number3-number4);
        }
    }
}
