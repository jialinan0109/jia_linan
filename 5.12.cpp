#include <iostream>

using namespace std;

int main()
{
   int a;
   int b;
   int c;

   for ( a = 1; a <= 10; a++ )
   {
      for ( b = 1; b <= a; b++ )
         cout << "*";
    cout << endl;
   }

   cout << endl;

   for ( a = 10; a >= 1; a-- )
   {
      for ( b = 1; b <= a; b++ )
         cout << "*";
    cout << endl;
   }

   cout << endl;


   for ( a = 10; a >= 1; a-- )
   {
      for ( b = 10; b > a; b-- )
         cout << " ";

      for ( b = 1; b <= a; b++ )
         cout << "*";
      cout << endl;
   }
   cout << endl;

   for ( a = 10; a >= 1; a-- )
   {
      for ( c = 1; c < a; c++ )
         cout << " ";

      for ( b = 10; b >= a; b-- )
         cout << "*";
    cout <<endl;

   }
}
