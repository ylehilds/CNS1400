   // Implementation file
   // Professor: Neil B. Harrison
   // Author: Lehi ALcantara
   // Course: CNS 1400
   // Section: 001
   // Project: Lab Nine
   // Date Written: Mar 07, 2006
   // ---------------------------------------------- 

#include "tokengiver.h"

    TokenGiver::TokenGiver( )
    {
       numTokens = 0;
    }

    TokenGiver::TokenGiver( int n )
    {
     numTokens = n;
   }
 
   void TokenGiver::addTokens( int n )
   {
       numTokens += n;
   }
 
   void TokenGiver::getToken( )
   {
       numTokens--;
   }
 
   int TokenGiver::countTokens( )
   {
       return numTokens;
   }
