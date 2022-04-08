   // Main routine
   // source main file
   // Purpose: to test the TokenGiver class
   // Professor: Neil B. Harrison
   // Author: Lehi ALcantara
   // Course: CNS 1400
   // Section: 001
   // Project: Lab Nine
   // Date Written: Mar 07, 2006
   // ---------------------------------------------- 
 
    #include <iostream>
    using namespace std;
 
  #include "tokengiver.h"

  int main ( )
  {
     TokenGiver tokenMachine( 27 );
     cout << "\nThe machine has  " << tokenMachine.countTokens( );

     tokenMachine.addTokens( 5 );
     cout << "\nThe machine has  " << tokenMachine.countTokens( );	

     tokenMachine.getToken( );
     cout << "\nThe machine has  " << tokenMachine.countTokens( );	

     tokenMachine.getToken( );
     cout << "\nThe machine has  " << tokenMachine.countTokens( );

     cout << endl;
	 system ("PAUSE");
     return 0;
  }
