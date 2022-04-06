#include <iostream>
#include <vector>
using namespace std;

int main ( )
{
   vector<int> v;
   cout << "Enter a list of positive numbers.\n";
   cout << "End the list with a negative number.\n";
   
   int next;
   cin >> next;
   while ( next > 0 )
   {
        v.push_back( next );
        cout << next << " added to the Vector\n.";
        cout << "v.size( ) = " << v.size( ) << endl;
        cin >> next;
    }

cout << "You entered:\n";
for ( unsigned int i = 0; i < v.size( ); i++ )
   cout << v[ i ] << endl; 
return 0;
}
