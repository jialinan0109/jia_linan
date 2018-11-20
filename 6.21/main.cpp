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
         cout << a << " 是偶数\n\n";
      else
         cout << a << " 不是偶数\n\n";
   }
}
bool isEven( int a )
{
   return !( a % 2 );
}
