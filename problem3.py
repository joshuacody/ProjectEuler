#!/usr/bin/python

#######################################################
# Author: Joshua Smith
# Date Created: March 3, 2015
# Date Last Modified: March 3, 2015
# Description: Finds the max prime factor of a number X
#######################################################

def find_max_prime_factor():
	x = 600851475143

	for i in range(10000,1, -1):
		primeCnt = 0
		if x % i == 0:
			for j in range(1,i+1):
				if i % j == 0:
					primeCnt += 1
			if primeCnt > 2:
				continue
			if primeCnt == 2:
				print i
				break

find_max_prime_factor()