#include <iostream>
#include <string>
using namespace std;
int main()
{
 int months=0;
 double initialmoney= 10000;
 double monthlyinterest= 1.005;
 double monthlywithdrawn= 500; 
 while (initialmoney>0)
 {// assuming that the interest kicks in before the monthly withdrawn
  initialmoney=initialmoney * monthlyinterest -monthlywithdrawn;
  months++;
 
 }  
 int extramonths;
 /* mod is the % sign and what it does it indicates the remaining of a division
 which in this case is 22/12 the remaining is 10, so by that you know that it is one year and
 10 months.*/
 cout<<"the account is depleted in: " <<months << " months.\n"; 
 cout<<"the account will be depleted in: " <<months/12 << " year and " << months %12 << " months."; 
  return 0;
 
 
 
} 