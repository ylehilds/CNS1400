   // Header file for the TokenGiver class 
   // Purpose:Models a token vending machine
   // Professor: Neil B. Harrison
   // Author: Lehi ALcantara
   // Course: CNS 1400
   // Section: 001
   // Project: Lab Nine
   // Date Written: Mar 07, 2006
   // ---------------------------------------------- 
    #include <string>
   using namespace std; 


   #ifndef tokenGiverH 
  #define tokenGiverH 

  class TokenGiver 
  { 
  private: 
     int numTokens; 
  
  public: 
       // Default Constructor 
       // Purpose: Initializes a TokenGiver object 
       // Parameters: none 
       // Returns: none 
       // Pre-conditions: none 
       // Post-conditions: none 
       TokenGiver( ); 
  
       // Parameterized Constructor 
       // Purpose: Initializes a TokenGiver object 
       // Parameter: the initial number of tokens in the machine
       // Returns: none 
       // Pre-conditions: none 
       // Post-conditions: none 
       TokenGiver( int ); 

      // addTokens function 
      // Purpose: add tokens to the machine 
      // Returns: void 
      // Pre-conditions: none 
      // Post-conditions: none 
      void addTokens( int ); 

      // getToken function 
      // Purpose: vends a token (numTokens --)
      // Parameters: none 
      // Returns: none
      // Pre-conditions: none 
      // Post-conditions: none 
      void getToken( ); 
  
      // countTokens function 
      // Purpose: returns the number of tokens in the machine 
      // Parameters: none 
      // Returns: the number of tokens as an integer 
      // Pre-conditions: none 
      // Post-conditions: none 
      int countTokens( ); 
    }; 
    #endif
