# include <iostream>
using namespace std;
int adddec_by_value ( int, int);
int adddec_by_reference ( int&, int&);
int main ()
{
	cout << "Enter the first integer number" << endl;
	int num1;
	cin >> num1;
	cout << "Enter the second integer number" << endl;
	int num2;
	cin >> num2;
	cout << num1 << " & " << num2 << endl << endl;
	int newnum = adddec_by_value (num1, num2);
	cout << "the value function answer is: " << newnum << endl;
	cout << "the value of the variables are: " << num1 << " & " << num2;
	cout << endl;
	int newnumtwo = adddec_by_reference (num1, num2);
	cout << "the reference function answer is: " <<newnumtwo<< endl;
	cout << "the value of the variables are: " << num1 << " & " << num2;
	
}
int adddec_by_value (int x, int y)
{
	int answer = x + y;
	--x;
	--y;
	return answer;
}
int adddec_by_reference (int& a, int& b)
{
	int answer = a + b;
	--a;
	--b;
	return answer;
}
