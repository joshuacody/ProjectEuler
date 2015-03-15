#!/usr/bin/python

#######################################################
# Author: Joshua Smith
# Date Created: March 3, 2015
# Date Last Modified: March 3, 2015
# Description: Finds the sum of the even fibonacci 
#				numbers under 4,000,000 
#######################################################

def sum_fib_num():
	curr = 1
	prev = 0
	x = 0
	next = 0

	while(next < 4000000):
		next = curr + prev
		prev = curr
		curr = next		
		if next % 2 == 0:
			x += next

	print x

sum_fib_num()