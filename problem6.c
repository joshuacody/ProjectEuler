/*#######################################################
# Author: Joshua Smith
# Date Created: March 15, 2015
# Date Last Modified: March 15, 2015
# Description: Finds the difference between the sum of the 
#				squares and the square of the sum of the 
#				first 100 natural numbers
#######################################################*/

#include <stdio.h>	//printf
#include <math.h> //for pow function

double sumOfSquares(){
	printf("Computing sum of squares for 1-100\n");
	double sum = 0.0;	//double for pow function

	for(double i = 1.0 ; i <= 100.0 ; i++){
		sum = sum + pow(i , 2.0);	//sums each squared number
	}

	printf("Sum of squares is: %f\n", sum);
	return sum;

}

double squareOfSum(){
	printf("Computing square of sum for 1-100\n");
	double sqSum = 0.0;

	for(double i = 1.0 ; i <= 100.0 ; i++){
		sqSum = sqSum + i;	//sums each natural number
	}

	sqSum = pow(sqSum , 2.0);	//squares sum of natural numbers

	printf("Square of sum is: %f\n", sqSum);
	return sqSum;
}

int main(){

	int diff = (int)( squareOfSum() - sumOfSquares() ); //casts double to int then prints the difference
	printf("Difference: %d\n", diff);

	return 0;
}