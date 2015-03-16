/*#######################################################
# Author: Joshua Smith
# Date Created: March 15, 2015
# Date Last Modified: March 15, 2015
# Description: Finds the 10,001st prime number using Sieve
#				of Eratosthenes
#######################################################*/

#include <stdio.h>

#define LIMIT 1000000 //size of natural numbers array
#define TARGET 10001 //target prime number

int main(){

	int i, j;
	int count = 0;
	int numArr[LIMIT];

	//populate numArr with natural numbers 
	for(i = 0 ; i < LIMIT ; i++){
		numArr[i] = i+2;	
	}

	//sieves the non prime numbers
	for(i = 0 ; i < LIMIT ; i++){
		if(numArr[i] != 0){
			for(j = i + numArr[i] ; j < LIMIT ; j += numArr[i]){	//set J equal to i + numArr[i] to increment through array at the correct position
				numArr[j] = 0;	//multiple of the number are set to 0 to be skipped over in the next loop iteration
			}
		}
	}

	//iterates through array to tally prime numbers
	for(i = 0 ; i < LIMIT ; i++){
		if(numArr[i] != 0){
			count++;		//counts the number of primes found
		}
		if(count == TARGET){
			printf("Prime number #%d is: %d\n", TARGET, numArr[i]);
			break;
		}
	}

	return 0;
}