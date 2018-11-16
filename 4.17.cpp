#include <iostream>

using namespace std;

int main()
{
    int counter=1;
    int number;
    int largest=0;
    int a;

    while(counter <= 10)
    {

        cout<<"number: ";
        cin>>number;

        if (number>largest)
        {
            cout<<"The largest: "<<number<<endl;
            largest=number;
        }
        else
        {
            cout<<"The largest: "<<largest<<endl;

        }

        a=counter++;
        cout<<"counter: "<<a<<endl;
    }
    return 0;
}
