#include <iostream>
#include <string>
using namespace std;
int main()
{
	int sentences = 0;
	char ch;
	while (cin.get (ch))
	{
		if (ch == '.' || ch == '!' || ch =='?')
		sentences++;
	}
	cout << sentences << " sentences" << endl;
	return 0;
}
