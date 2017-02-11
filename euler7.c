#include <stdio.h>
#include <math.h>

/* By listing the first six prime numbers: 

2, 3, 5, 7, 11, and 13, 

we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

int is_prime(int num){
	
	for (int i=2; i <= sqrt(num); i++){
		if ((num%i) == 0)
			return 0;
	}
	return 1;
}


int main(){

	int prime_count = 0;
	int maxprimes = 10001;
	int i = 2;

	while (prime_count < maxprimes){
		if (is_prime(i)){
			prime_count++;
			printf("%d, %d\n", prime_count, i);
		}
		i += 1;

	}

	return 0;
}