#include <iostream>

using namespace std;
bool isEven( int );
int main()
{
    int a;
   for ( int i = 1; i <= 3; i++ )
   {
      cout << "Enter an integer: ";
      cin >> a;

      if ( isEven( a ) )
         cout << a << " ��ż��\n\n";
      else
         cout << a << " ����ż��\n\n";
   }
}
bool isEven( int a )
{
   return !( a % 2 );
}
