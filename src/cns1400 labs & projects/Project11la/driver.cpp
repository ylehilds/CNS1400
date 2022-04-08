// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Eleven
// Date Written: April 13, 2007
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include "tokenizer.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "Author: Lehi Alcantara" << endl;
	cout << "Section: 001" << endl;
	cout << "Project Eleven" << endl;
	cout << "------------------------------------------------------------------------------"<< endl;
	char phrase[200];
	cout << "Please input a string of words: ";
	cin.getline(phrase, 199);
	StringTokenizer statement(phrase, ' ');
	statement.parser();
	system("PAUSE");
	return 0;
}
