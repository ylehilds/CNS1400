#ifndef section_header 
#define section_header


#include <string>
using namespace std;
class Section
{
private:
	int array_of_scores [30];
	int studentNumber;
	string course;
	string instructor;
public:
	// Parameterized Constructor 
    // Purpose: Initializes a Student object 
    // Parameters: 2 strings 
    // Returns: none 
    // Pre-conditions: none 
    // Post-conditions: none 
	Section (string,string);
	// Parameterized Constructor 
    // Purpose: reads the file located in "c:\\grades.txt" 
    // Parameters: 1 string 
    // Returns: void 
    // Pre-conditions: none 
    // Post-conditions: none 
	void readData(string);
	// Purpose: initializes the array 
    // Parameters: none
    // Returns: void 
    // Pre-conditions: none 
    // Post-conditions: none 
	void arrayInitializer ();
	// Purpose: getter, gets the number of scores read in the file
    // Parameters: none 
    // Returns: number of scores from file 
    // Pre-conditions: none 
    // Post-conditions: none 
	int numberScores();
	// Purpose: figure out the highest score
    // Parameters: none
    // Returns: highest score 
    // Pre-conditions: none 
    // Post-conditions: none 
	int highestScore();
	// Purpose: figure out the lowest score
    // Parameters: none
    // Returns: lowest score 
    // Pre-conditions: none 
    // Post-conditions: none 
	int lowestscore ();
	// Purpose: figure out the average score
    // Parameters: none
    // Returns: average scores 
    // Pre-conditions: none 
    // Post-conditions: none 
	double averageScore();
	// Purpose: gives the score position
    // Parameters: integer
    // Returns: value of score position 
    // Pre-conditions: none 
    // Post-conditions: none
	int scorePosition(int);
	// Purpose: sort the array putting in order from lowest to highest
    // Parameters: none
    // Returns: array of scores from lowest to highest 
    // Pre-conditions: none 
    // Post-conditions: none 
	void sort();
	// Purpose: prints out the array
    // Parameters: none
    // Returns: display the array
    // Pre-conditions: none 
    // Post-conditions: none 
	void print();
	// Purpose: getter, get the course information from the private class
    // Parameters: none
    // Returns: privat information course
    // Pre-conditions: none 
    // Post-conditions: none 
	string myCourse();
	// Purpose: getter, get the instructor information from the private class
    // Parameters: none
    // Returns: privat information instructor
    // Pre-conditions: none 
    // Post-conditions: none 
	string myInstructor();
	// Purpose: prints out the string getters
    // Parameters: none
    // Returns: display the string getters information
    // Pre-conditions: none 
    // Post-conditions: none 
	void printStrings();
};
#endif
  
