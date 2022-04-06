#include <cmath>
#include <iostream>
#include <string>

using namespace std;

bool CheckDone (double thesum){ 
	double sumtimesfour = 4.0 * thesum;
	if (fabs(sumtimesfour - 3.14159) < 0.0000001) {
		return true;
	}
	return false;
}
int main ()
{
	double sum = 0.0;
	double denominator = 1.0;
	bool shouldadd = true;
	
	while (!CheckDone(sum)) { 
		if (shouldadd) { 
			sum = sum + (1.0/denominator);
			shouldadd = false;
		} else { 
			sum = sum - (1.0/denominator);		
			shouldadd = true;
		}
		denominator++;
		denominator++;
	}
	cout << "pi is: " << 4.0 * sum << endl;
	cout << "done" << endl;
	return 0;
}
