#include <iostream>

using namespace std;

int main() {
	
	int initialValue = 10000;
	double monthlyInterestRate = 0.005;
	int withdrawnPerMonth = 500;
	int countMonths = 0;
	
	// assumption: interest is added
	// before money is withdrawn.	
	while (initialValue > 0) {

		int thisMonthsInterest = monthlyInterestRate * initialValue;
		initialValue = initialValue + thisMonthsInterest;
		
		initialValue = initialValue - withdrawnPerMonth;
				
		countMonths++;
	}
	
	int totalYears = countMonths / 12;
	int extraMonths = countMonths % 12;
	
	cout << "The total number of months is: " << countMonths << endl;
	cout << "The total amount of time is: " << totalYears << " year and " 
		 << extraMonths << " months. " << endl;
}
