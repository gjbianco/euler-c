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
 * |   Dec 12, 2013 - optimized                                                |
 * |                                                                           |
 * +---------------------------------------------------------------------------+
 */

#include <stdio.h>
#include <stdlib.h>

/* max number that multiples cannot exceed */
#define MAX 1000

/* number of different multiples */
#define NUM 2

int indiv_sum(int mult) {
	/* calc iterations needed */
	int iters = MAX/mult;
	if(MAX % mult == 0)
		iters--;

	int mult_sum = 0;     /* start at 0 to simplify loop */
	int sum = 0;

	printf("%d iters: %d\n", mult, iters);

	for(int i = 0; i < iters; i++) {
		mult_sum += mult;
		printf("\t%d\n", mult_sum);
		sum += mult_sum;
		printf("\t\trunning sum: %d\n", sum);
	}

	printf("%d sum: %d\n", mult, sum);

	return sum;
}

int main() {
	int sum = 0;
	int mults[NUM] = {3, 5};
	
	/* sum each number individually */
	for(int i = 0; i < NUM; i++)
		sum += indiv_sum(mults[i]);

	printf("sum: %d\n", sum);
}
