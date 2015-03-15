/*#######################################################
# Author: Joshua Smith
# Date Created: March 13, 2015
# Date Last Modified: March 13, 2015
# Description: Finds smallest positive number that is 
#				evenly divisible by all the numbers of
#				1 to 20
#######################################################*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	bool loop = true;
	int num = 2520;	//Starts at 2520 because 2520 is divisible by all the numbers 1-10
	int i = 1;

	printf("Begin loop\n");
	while(loop){	//loops until the smallest number is found
		if(num % 11 == 0){	//several nested for loops to check if the number is evenly divisible.
			if(num % 13 == 0){	
				if(num % 14 == 0){
					if (num % 16 == 0){		//so much nesting
						if (num % 17 == 0){
							if (num % 18 == 0) {	//Only need to use 11,13,14,16,17,18,19,20 because of their divisible numbers
								if (num % 19 == 0){
									if (num % 20 == 0){
										printf("Loop iteration: %d\n", i);
										printf("Smallest integer: %d\n", num);
										break;
									}
								}
							}
						}
					}
				}
			}
		}
		i = i + 1;	//Used to count loop iterations
		num = num + 2520;	//Incremented by 2520 each time to cut down loop iterations
	}

	return 0;
}