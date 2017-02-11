#include <stdio.h>

/* If we list all the natural numbers below 10 that are multiples 
of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main(){
	int ceiling = 1000;  // look at numbers [0 - ceiling]
	int total = 0;	     // running total of the found numbers

	for (int i=0; i < ceiling; i++){
		if (!(i % 3) || !(i % 5)){
			total += i;
		}
	}
	
	printf("%d\n\n", total);

	return 1;

}