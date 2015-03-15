#!/usr/bin/python

#######################################################
# Author: Joshua Smith
# Date Created: March 3, 2015
# Date Last Modified: March 3, 2015
# Description: Finds largest palindrome product of 3 digit numbers
#######################################################

import sys

def find_max_palindrome():
	high = 0
	for i in range(999, 100, -1):	#loop backwards starting at 99
		for j in range(999, 100, -1):	
			num = i * j			
			strNum = str(num)	#cast int as str
			revNum = strNum[::-1]	#reverse str
			if strNum == revNum:	#if still equal, print palindrome and exit
				 if num > high:		#tracks highest current palindrome
				 	high = num
					#sys.exit(1)

	print high

find_max_palindrome()