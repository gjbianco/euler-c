/* -----------------------------------------------------------------------------
 *
 * title:  large_prime.c
 * author: Guy J. Bianco IV
 *
 * Project Euler
 *   Problem 3 <http://projecteuler.net/problem=3>
 *
 * From the page:
 *  "The prime factors of 13195 are 5, 7, 13 and 29.
 *
 *   What is the largest prime factor of the number 600851475143 ?"
 *
 * History:
 *   Dec 13, 2013 - initial version
 *
 * -----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG 0
#endif

int main() {
	int is_prime(int n);
	long long int goal=600851475143, lpf=0;

	/* largest possible prime factor is either # itself or <= half that # */
	long int half_goal = goal/2;

	for(int i = 0; i <= half_goal; i++)
		if(goal % i == 0)
			if(is_prime(i))
				lpf=i;
	if(lpf == 0)
		lpf = goal;
	printf("lpf: %Ld\n", lpf);

	return 0;
}

int is_prime(int n) {
	long int h = n/2;
	for(int long i = 0; i <= h; i++)
		if(n % i == 0)
			return 0;
	return 1;
}
