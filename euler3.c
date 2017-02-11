#include <stdio.h>
#include <math.h>

/* The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

int main(){

	long ceiling = 600851475143;   // find prime factors of this number
	long a = 0, b = 1;


	// If our number is even, factor out 2 until it's not.
	while (ceiling % 2 == 0){  
		ceiling /= 2;
	}

	// Iterate through odd numbers to find divisors and factor them out.
	for (int i = 3; i <= sqrt(ceiling); i+=2){
		while (ceiling % i == 0){
			printf("%d\n", i);
			ceiling /= i;
		}
	}
	// Anything > 2 that's left over is a largest prime factor.
	if (ceiling > 2){
		printf("%ld\n", ceiling);
	}

	return 1;

}