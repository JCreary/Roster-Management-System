

#ifndef DEGREEPROGRAM_H_ //prevents multiple includes
#define DEGREEPROGRAM_H_ //prevents multiple includes
#include <string> //Includes string

/* enum is defined below to list the degree programs. SECURITY = 0, NETWORK = 1, SOFTWARE = 2 */

enum DegreeProgram { SECURITY, NETWORK, SOFTWARE };


/*Parallel array displays a string for each degree program*/
static const std::string degreeProgramStrings[] = {"SECURITY", "NETWORK", "SOFTWARE"};




#endif /* DEGREEPROGRAM_H_ */
