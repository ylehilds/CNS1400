#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main ( )
{
	
  int int1;
  int int2;
  cout<< "please input 2 integers: \n";
  cin >> int1;
  cin  >> int2;
  if (int1 == int2)
  
	cout << " The 2 numbers inputed were of equal value\n";
  else 
   
  if (int1>int2)
  { cout << "The highest number is: " << int1;
  }
  else
  {
	cout << "The highest number is: " << int2;
  }
  
  return 0;
}
