#include <iostream>
#include <iomanip>

const int SPACING = 6;
const int FIRST_SPACE = 2;
const int INCREMENT = 2;
const int BOTTOM_NUM = 2;
const int TOP_NUM = 12;
using namespace std;
int main()
{
	int i,j;
	cout << "  "; 
	for (i = BOTTOM_NUM; i <= TOP_NUM; i += INCREMENT)
	{
		cout << setw (SPACING) << i;
	}
		cout << endl;
		for (i =BOTTOM_NUM; i <= TOP_NUM; i += INCREMENT)
		{
			cout << setw (FIRST_SPACE) << i;
			for (j = BOTTOM_NUM; j <= TOP_NUM; j += INCREMENT)
			{
				cout << setw (SPACING) << i * j;
			}
			cout << endl;
		}
		system ("PAUSE");
		
	
}
