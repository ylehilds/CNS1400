#include <iostream>
using namespace std;
int main()
{
 
 string today;
 string sunday, monday, tuesday, wednesday, thursday, friday, saturday;
 cout << "will I go to school today?\n";
 cout << "Let's determine by answering a couple of questions: \n";
 cout << "What is today's day? \n";
 cin >> today; 
 if (today == "sunday") 
  today = "sunday";
 else if (today == "saturday")
  today = "saturday";
 else if (today == "monday")
  today = "monday";
 else if (today == "tuesday") 
  today ="tuesday";
 else if (today == "wednesday")
  today = "wednesday";
 else if (today == "thursday")
  today = "thursday";
 else if (today == "friday")
  today = "friday";
 else 
 {
  cout <<"invalid input\n";
  return -1;
 }
 if ((today == "sunday") || (today == "saturday"))
 {
  cout << "don't go to school today, because its a weekend, enjoy life!\n"; 
 }
 else 
 {
 cout << "What is today's temperature? \n";
 int temp;
 cin >> temp;
if (temp<=0)
 
  cout << "Stay home because it is too cold!\n";
 else
  cout << " go to school!\n"; 
 }
 return 0;
}

