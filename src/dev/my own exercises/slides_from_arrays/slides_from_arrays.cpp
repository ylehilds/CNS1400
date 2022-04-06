#include <iostream>
using namespace std;
int main( )

{
 	// declare an array 3 x 4
	int examScores[ ][4]= { {78, 89, 65, 97},
						    {76, 79, 82, 85},
						    {83, 89, 91, 90} 
						  };

	const int STUDENT = 3;
	const int EXAMS = 4;

	for ( int i = 0; i < STUDENT; i++ )
	{
	     int sum = 0;
	     for ( int j = 0; j < EXAMS; j++ )
	          sum = sum + examScores [ i ][ j ];

	     float avg = ((float)sum)/EXAMS;
                  cout << "Student # " << (i+1) << ": " << avg << "\n";
	}
	return 0;
}
