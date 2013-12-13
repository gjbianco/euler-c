/* -----------------------------------------------------------------------------
 *
 * 3and5
 * Guy J. Bianco IV
 *
 * Program that solves the first problem posted on Project Euler.
 *
 *   <http://projecteuler.net/problem=1>
 *
 *
 * From the page:
 *
 *   "If we list all the natural numbers below 10 that are multiples of
 *    3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 *    Find the sum of all the multiples of 3 or 5 below 1000."
 *
 *
 * History:
 *   Dec 12, 2013 - inital version
 *   Dec 12, 2013 - optimized
 *   Dec 12, 2013 - working solution
 *
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

/* max number that multiples cannot exceed */
#define MAX 1000

int main() {
	int sum = 0;

	int mults[] = {3, 5};
	int size = sizeof(mults)/sizeof(mults[0]);

	for(int i = 0; i < MAX; i++)
		for(int j = 0; j < size; j++)
			if(i % mults[j] == 0) {
				sum += i;
				break;
			}

	printf("sum: %d\n", sum);

	return 0;
}
