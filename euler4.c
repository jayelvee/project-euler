#include <stdio.h>
#include <string.h>
#include <math.h>

/* A palindromic number reads the same both ways. The largest 
palindrome made from the product of two 2-digit numbers 
is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 
3-digit numbers.
*/

int isPalindrome(int num){
	/* Convert an int into a string, then check if the string is a
	   palindrome.
	*/

	// ceil(log10(num)) gives us the number of chars needed, 
	// add one for \0.
	int arr_size = (int)((ceil(log10(num))+1)*sizeof(char));
	char number_str[arr_size];
	sprintf(number_str, "%d", num);

	int number_of_digits = arr_size - 1; 

	// pairwise comparison of the leftmost and rightmost chars.
	// Return false as soon as we have a mismatch before getting to the
	// middle.
	for (int i = 0; i < number_of_digits/2; i++){
		if (number_str[i] != number_str[number_of_digits - i - 1]){
			return 0;
		}
	}
	return 1;
}

int main(){

	int maxfound = 0;
	int max = 999;
	int min = 100;
	
	// For 999 downto 100, check if the product with 999 downto 100
	// is a palindrome. Keep track of the max seen.

	for (int i = max; i >= min; i--){
		for (int j = max; j >= min; j--){
			if (isPalindrome(i*j)){
				if (i * j > maxfound){
					maxfound = i * j;
				}
			}
		}
	}

	printf("largest palindrome: %d\n", maxfound);
	

	return 0;

}