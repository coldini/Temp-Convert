#include <stdio.h>
#include <stdlib.h>

/* Programmer NAme: Colden Jeanmonod
 * Class and Semester: CIS 1057 Section 004 Fall 2023
 * Assignment: Lab 3
 * Name: Earth Temperature
 * Description: Prompt for Input, convert depth to Celsius,
 * Then convert celsius to farenheight
 */



//These will declare the functions of the Lab
double celsius_at_depth (double depth_given);
double farenheit_to_celsius(double temperature);



int main () {
//These are the variables I will need to set up
double depth, celsius_depth, new_temp ;

//This will ask for user input about the depth

printf("Enter the depth in kilometers");
scanf("%lf", &depth);

//This variable here is to take the depth and turn it into a temperature in celsius.
celsius_depth = celsius_at_depth(depth);
//This should print out the celsius at the specific depth
printf("%0.3lf degrees celsius at the depth. \n",  celsius_depth);


//This should chaange the degrees celsius into degrees farenheit
new_temp = farenheit_to_celsius(celsius_depth);

//This should return the correct farenheit and print it out
printf("This temperature in farenheiht is %0.3lf . \n", new_temp); 


return EXIT_SUCCESS;
}


/* This function should do the following,
 * Calculate the temperature at a given depth
 * Respond with the correct temperatire in degrees celsius
*/
 double  celsius_at_depth (double depth_given){
 
// This is just a variable to put the correct temperature within
 double celsius;
  
//This should preform a the calculation to turn the depth into temperature
  celsius= 10*(depth_given) +20;


return celsius;

}



/* 
 * This function is to convert the degrees celsius from the 
 * given depth to degrees farenheit.
 */
double farenheit_to_celsius (double temperature){
	//This is the variable that will store the temperature	
	double farenheit;
		
	//This will assign the correct measurement in degrees farenheit to the variable
	farenheit= 1.8*(temperature) + 32;

	//This will return the degrees farenheit.
	return farenheit;
}
