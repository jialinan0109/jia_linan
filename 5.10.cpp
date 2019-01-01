#include <iostream>

using namespace std;

int main()
{
    int a = 1;
   cout << "x\tx!"<<endl;

   for ( int i = 1; i <= 5; i++ )
   {
      a *= i;
      cout << i << '\t' << a << endl;
   }
}
