/* +---------------------------------------------------------------------------+
 * |                                                                           |
 * | 3and5                                                                     |
 * | Guy J. Bianco IV                                                          |
 * |                                                                           |
 * | Program that solves the first problem posted on Project Euler.            |
 * |                                                                           |
 * |   <http://projecteuler.net/problem=1>                                     |
 * |                                                                           |
 * |                                                                           |
 * | From the page:                                                            |
 * |                                                                           |
 * |   "If we list all the natural numbers below 10 that are multiples of      |
 * |    3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.        |
 * |                                                                           |
 * |    Find the sum of all the multiples of 3 or 5 below 1000."               |
 * |                                                                           |
 * |                                                                           |
 * | History:                                                                  |
 * |   Dec 12, 2013 - inital version                                           |
 * |                                                                           |
 * +---------------------------------------------------------------------------+
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* define our DEBUG macro as false if we are not in debug mode */
#ifndef DEBUG
#define DEBUG 0
#endif

/* the base numbers to obtain multiples from */
#define MULT_A 3
#define MULT_B 5

/* the max number that the multiples cannot exceed */
#define MAX 1000

int main() {
	int sum = 0;   /* running total */
	int count = 0; /* iteration count (testing) */

	int mult_a = 0;
	int mult_b = 0;

	/* calculate min number of iterations needed */
	int iters = (MAX/fmin(MULT_A, MULT_B)) + 1;
	
	if(DEBUG)
		printf("iters: %d\n", iters);

	for(int i = 0; i < iters; i++) {
		if(DEBUG)
			count++;

		mult_a += MULT_A;
		if(mult_a < MAX)
			sum += mult_a;

		mult_b += MULT_B;
		if(mult_b < MAX)
			sum += mult_b;
	}

	if(DEBUG)
		printf("count: %d\n", count);

	printf("sum: %d\n", sum);
}
