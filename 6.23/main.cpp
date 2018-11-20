#include <iostream>
using namespace std;

void square( int, char );

int main()
{
   int side;
   char character;

   cout << "ÊäÈë×Ö·ûºÍ±ß³¤: ";
   cin >> character >> side;
   cout << '\n';

   square( side, character );
   cout << endl;
}

void square( int side, char fillCharacter )
{
    for ( int row = 1; row <= side; row++ )
   {
      for ( int col = 1; col <= side; col++ )
         cout << fillCharacter;

      cout << '\n';
   }
}
