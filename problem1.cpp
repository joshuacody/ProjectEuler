/*#######################################################
# Author: Joshua Smith
# Date Created: March 3, 2015
# Date Last Modified: March 3, 2015
# Description: Finds the sum of numbers evenly divisible 
#				by 3 or 5 under 1000
#######################################################*/

#include <iostream>

using namespace std;

int main(){
	
	int x = 0;

	for(int i = 0 ; i < 1000 ; i++){

		if( i % 3 == 0){
			x += i;
		} else if ( i % 5 == 0){
			x += i;
		}
	}

	cout << x << endl;

	return 0;
}